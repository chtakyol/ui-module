#! /bin/sh
pushd ..
chmod +x vendor/premake/linux/premake5
./vendor/premake/linux/premake5 gmake
make
popd