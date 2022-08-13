#pragma once
#include <string>
#include <imgui.h>
#include <backends/imgui_impl_opengl3.h>
#include <backends/imgui_impl_glfw.h>

#include "Application.h"

namespace UiEngine
{
	class Image
	{
	public:
		Image(const char* filename, GLuint* out_texture, int* out_width, int* out_height);
		~Image();
	private:
		bool LoadTextureFromFile(const char* filename, GLuint* out_texture, int* out_width, int* out_height);
	};
}