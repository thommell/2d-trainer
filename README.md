# 2d-trainer

First C++ project to learn basic C++ usage, building, compiling, linking, etc.

## How to run

To build and run the project in one step:

```sh
just run
```
This will automatically build the project and launch the program.

## Requirements

You need the following tools installed:

* g++ - C++ compiler
* just – command runner
* bear – generates compile_commands.json (used for IDE support)
* raylib – graphics/game library

## Install (Arch Linux)

```sh
sudo pacman -S bear just raylib g++
```

## Available commands

### Run

```sh
just run
```

Builds and runs the program.

### Build

```sh
just build
```

Compiles the project into the `build/` directory.

### Test

```sh
just test
```

Runs the compiled executable. Make sure you have built the project first.

### Clean

```sh
just clean
```

Removes build files and the generated `compile_commands.json`.

