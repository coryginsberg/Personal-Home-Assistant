from urllib.request import urlopen
import json
import re

url = urlopen("https://raw.githubusercontent.com/Templarian/MaterialDesign/master/meta.json")

input = input('Enter Search Phrase: ')
meta = [(i['name'], i['codepoint']) for i in json.loads(url.read()) if re.search(f'^{str(input)}', i['name'])]

print(f'''---
esphome:
  # ...
  includes:
    - fonts/{str(input)}_icon_map.h

# ...

font:
  - file: fonts/materialdesignicons-webfont.ttf
    id: ...
    size: ...
    glyphs:''')

for name, codepoint in meta:
    print('      - "\\U000%s" # %s' % (codepoint, name))

with open(f'/config/esphome/fonts/{str(input)}_icon_map.h', 'w') as h:
    h.write(f'#include <map>\nstd::map<std::string, std::string> {str(input)}_icon_map\n')
    h.write('  {\n')
    for name, codepoint in meta:
        h.write('    {"%s", "\\U000%s"},\n' % (name.replace(f'{str(input)}-', ''), codepoint))
    h.write('  };')