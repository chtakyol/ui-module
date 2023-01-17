FROM raspbian/x11

RUN apt-get update && apt-get install -y \
	bash \
	build-essential \
	uuid-dev \
	mesa-utils mesa-common-dev libglu1-mesa-dev \
	libx11-dev libxcursor-dev libxrandr-dev libxinerama-dev libxi-dev \
	xauth \
	git

WORKDIR /app

RUN touch /root/.Xauthority
#RUN xauth add ${DISPLAY} . ${XAUTHORITY}
#ENV DISPLAY=:0
#ENV XAUTHORITY=/root/.Xauthority

RUN xauth add raspberrypi/unix:0  MIT-MAGIC-COOKIE-1  7a8a3650df58de6c6f6b9dfc2d4f623e

# Build premake5 from repository

RUN git clone https://github.com/premake/premake-core.git

WORKDIR premake-core

RUN make -f Bootstrap.mak linux

ENV PATH="$PATH:/app/premake-core/bin/release"

WORKDIR /

# Build ui-module

WORKDIR ui-module

COPY . .

RUN premake5 gmake

RUN make

RUN chmod +x bin/Debug-linux-/UiApp/UiApp

CMD ["./bin/Debug-linux-/UiApp/UiApp"]
