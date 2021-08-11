#!/bin/bash
fgrep -R /usr/lib/libc++.1.dylib "$1" | cut -d ' ' -f 3 | while read a;do
echo do $a cxx
install_name_tool -change '/usr/lib/libc++.1.dylib' '@loader_path/libc++.1.dylib' "$a"
cp lib/*.dylib "`dirname "$a"`"
done