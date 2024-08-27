#include <SDL2/SDL.h>
#include "fastgltf/core.hpp"
#include "fmt/core.h"
#include "glm/glm.hpp"
#include "imgui.h"
#include "stb/stb_image.h"
#include "VkBootstrap.h"
#include "vk_mem_alloc.h"

int main()
{
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window * window = SDL_CreateWindow(
        "ghost",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        640,
        480,
        SDL_WINDOW_SHOWN
    );

    bool run = true;

    while(run) {
        SDL_Event event;

        while(SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    run = false;
                    break;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
