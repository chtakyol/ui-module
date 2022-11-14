#! /bin/sh
pushd ..
chmod +x bin/Debug-linux-/UiApp/UiApp
LIBGL_ALWAYS_SOFTWARE=1 ./bin/Debug-linux-/UiApp/UiApp
popd