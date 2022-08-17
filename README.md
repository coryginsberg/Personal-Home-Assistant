# Personal Home Assistant Setup

## How to fix errors in esphome .yaml files:
NOTE: This may need to be done every time that Home Assistant Core updates.

1. Run `apt update && apt upgrade`
1. Run `apt install python3-pip`
1. Run `pip install pillow`

## How to generate new material design glyphs
1. Run `py esphome/fonts/generate-icons.py`

## Miscelaneous notes about this repo
- For privacy reasons, `secrets.yaml` and all `*.pem` (certificate) files are not included
- This is just the `/config` folder of my Home Assistant setup
- Pyscript is installed but not used yet