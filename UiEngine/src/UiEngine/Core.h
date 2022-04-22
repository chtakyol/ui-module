#pragma once

#ifdef UI_PLATFORM_WINDOWS
#ifdef UI_BUILD_DLL
#define	UI_API __declspec(dllexport)
#else
#define	UI_API __declspec(dllimport)
#endif
#endif