# Demo of Espressif esp32c3 with PlatformIO/Arduino

## Install PlatformIO

install [Python 3.6+](https://www.python.org/downloads/) as dependence.

### PlatformIO IDE

install [Visual Studio Code](https://code.visualstudio.com/Download), then install [PlatformIO IDE](https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide) extension.

> see https://docs.platformio.org/en/latest/integration/ide/pioide.html#platformio-for-vscode

### PlatformIO CLI

```bash
curl -fsSL https://raw.githubusercontent.com/platformio/platformio-core-installer/master/get-platformio.py -O
python get-platformio.py
```

## Build

### IDE

open this project in VSCode, select board from envs with command `>PlatformIO: Switch Project Environment`, then run command `>PlatformIO: Upload`.

> see statusbar of VSCode.

### CLI

activate python virtualenv:

```bash
# Linux with bash
source ~/.platformio/penv/bin/activate
# Window with Powershell
~\.platformio\penv\Scripts\activate.ps1
# Windows with cmd
~\.platformio\penv\Scripts\activate.bat
```

build & upload

```bash
# build and upload
pio run -t upload
# if your used luatos esp32c3 dev-board.
pio run -t upload -e luatos-esp32c3
```

## Good job

The led on dev boards will blink, and serial will print led state.