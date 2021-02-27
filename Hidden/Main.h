#include "HiddenPCH.h"

#if _DEBUG
// ReSharper disable once CppUnusedIncludeDirective
#include <vld.h>
#endif

#include "SDL.h"
#include "Application.h"

extern Hidden::Application* Hidden::CreateApplication();

int main(int argc, char** argv) {
	//Hidden::Application engine;

	(void)argc;
	(void)argv;

	Hidden::Application* engine = Hidden::CreateApplication();
	engine->Run();
	delete engine;
    
	return 0;
}