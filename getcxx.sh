#!/bin/sh
rm -rf opt usr lib
curl -sL http://packages.macports.org/libcxx/`curl -sL http://packages.macports.org/libcxx/ | grep darwin_10 | cut -d '"' -f 4 | sort | grep -v rmd160 | grep universal| tail -n 1` | bzcat | tar xf -
rm -f +*
find opt -name '*.tgz' -exec tar xzf {} \;
rm -rf opt
find usr -type l -delete
rm -rf usr/include
mv usr/lib lib
rm -rf usr
install_name_tool -change /usr/lib/libc++abi.dylib '@loader_path/libc++abi.dylib' lib/libc++.1.dylib