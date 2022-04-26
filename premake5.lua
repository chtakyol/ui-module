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
IncludeDir["imgui"] = "vendor/imgui"

include "UiEngine/vendor/GLFW"
include "UiEngine/vendor/imgui"

include "UiEngine"
include "UiApp"