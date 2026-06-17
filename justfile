exec_name := "Application"
build_dir := "build"
src_dir := "src"

cxx := "g++"
cxxflags := "-std=c++20 -Wall -Wextra -O2"
libs := "raylib"

run:
    just clean
    just setup
    just build
    just test

build:
    bear -- {{cxx}} {{cxxflags}} $(find {{src_dir}} -name "*.cpp") -o {{build_dir}}/{{exec_name}} $(pkg-config --cflags --libs {{libs}})

clean:
    rm -rf {{build_dir}}
    rm -rf compile_commands.json

setup:
    mkdir -p {{build_dir}}

test:
    ./{{build_dir}}/{{exec_name}}
