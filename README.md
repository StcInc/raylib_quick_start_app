# Raylib quick start app
- with cmake or without

### First install raylib in your system the way you want
for mac os can be installed with brew:

```bash
brew install raylib
```

### Then compile & run

```bash
cc main.c `pkg-config --libs --cflags raylib` -o main
./main
```

### Or use cmake

```bash
mkdir _build && cd _build
cmake ..
make
```

### Or use scripts

```bash
chmod +x run.sh
chmod +x build.sh
./run.sh
```

### When app starts you will see

![Screenshot.png](https://github.com/StcInc/raylib_quick_start_app/raw/master/Screenshot.png "Screenshot.png")
