#include "MiniginPCH.h"

#if _DEBUG
// ReSharper disable once CppUnusedIncludeDirective
#include <vld.h>
#endif

#include "SDL.h"
#include "Minigin.h"

extern Hidden::Minigin* Hidden::CreateApplication();

int main(int argc, char** argv) {
	//Hidden::Minigin engine;

	(void)argc;
	(void)argv;

	Hidden::Minigin* engine = Hidden::CreateApplication();
	engine->Run();
	delete engine;
    
	return 0;
}