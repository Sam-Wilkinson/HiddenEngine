#include "HiddenPCH.h"

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

//#include <SDL.h>
//#include "audio.h"
//
//// ignore warning 4244, conversion from int to uint8_t possible loss of data in audio.c >> line 264 and 322
//#pragma warning(push)
//#pragma warning (disable:4244)
//#include "audio.cpp"
//#pragma warning(pop)


//int main(int, char** )
//{
//    /* Initialize only SDL Audio on default device */
//    if (SDL_Init(SDL_INIT_AUDIO) < 0)
//    {
//        return 1;
//    }
//
//    /* Init Simple-SDL2-Audio */
//    initAudio();
//
//    /* Play music and a sound */
//    playMusic("../3rdParty/Simple-SDL2-Audio-master/music/highlands.wav", SDL_MIX_MAXVOLUME);
//    playSound("../3rdParty/Simple-SDL2-Audio-master/sounds/door1.wav", SDL_MIX_MAXVOLUME / 2);
//
//    /* While using delay for showcase, don't actually do this in your project */
//    SDL_Delay(1000);
//
//    /* Override music, play another sound */
//    playMusic("../3rdParty/Simple-SDL2-Audio-master/music/road.wav", SDL_MIX_MAXVOLUME - 1);
//    SDL_Delay(5000);
//
//    /* Pause audio test */
//    pauseAudio();
//    SDL_Delay(1000);
//    unpauseAudio();
//
//    playSound("../3rdParty/Simple-SDL2-Audio-master/sounds/door2.wav", SDL_MIX_MAXVOLUME / 2);
//    SDL_Delay(2000);
//
//    /* Caching sound example, create, play from Memory, clear */
//
//    Audio* sound = createAudio("../3rdParty/Simple-SDL2-Audio-master/sounds/door1.wav", 0, SDL_MIX_MAXVOLUME / 2);
//    playSoundFromMemory(sound, SDL_MIX_MAXVOLUME);
//    SDL_Delay(2000);
//
//    Audio* music = createAudio("../3rdParty/Simple-SDL2-Audio-master/music/highlands.wav", 1, SDL_MIX_MAXVOLUME);
//    playMusicFromMemory(music, SDL_MIX_MAXVOLUME);
//    SDL_Delay(10000);
//
//    /* End Simple-SDL2-Audio */
//    endAudio();
//
//    /* Important to free audio after ending Simple-SDL2-Audio because they might be referenced still */
//    freeAudio(sound);
//    freeAudio(music);
//
//    SDL_Quit();
//
//    return 0;
//}