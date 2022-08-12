project "UiEngine"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"src/**.h",
		"src/**.cpp",
	}

	includedirs
	{
		"src",
		"vendor/GLFW/include",
		"%{IncludeDir.imgui}"
	}

	links
	{
		"GLFW",
		"imgui",
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		links
		{
			"opengl32.lib"
		}

		defines
		{
			"UI_PLATFORM_WINDOWS",
			"UI_BUILD_DLL"
		}

	filter "system:linux"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		links 
		{
			"dl", "pthread" 
		}

		defines
		{
			"UI_PLATFORM_LINUX"
		}

	filter "configurations:Debug"
		defines "UI_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "UI_RELEASE"
		runtime "Release"
		optimize "on"