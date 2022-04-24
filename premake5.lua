workspace "UiModule"
	architecture "x86_64"
	startproject "UiApp"

	configurations
	{
		"Debug",
		"Release"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

IncludeDir = {}
IncludeDir["GLFW"] = "UiEngine/vendor/GLFW/include"

include "UiEngine/vendor/GLFW"

include "UiEngine"
include "UiApp"