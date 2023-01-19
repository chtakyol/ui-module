#! /bin/sh
pushd ..
sudo apt-get update
sudo apt-get install -y xserver-xorg-core xinit xterm

curl -fsSL https://get.docker.com -o get-docker.sh
sudo sh get-docker.sh
sudo usermod -aG docker pi

startx

docker build -t ui-module .
docker run -i -t --net=host -e DISPLAY -v /tmp/.X11-unix ui-module
popd