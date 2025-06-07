//
// Created by Antoine Hanna on 6/7/2025.
//
#include <LittleEngine/Window/Window.h>

using LittleEngine::Window::Window;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    Window gameWindow = Window(hInstance, 800, 600, L"Game");

    while (gameWindow.ProcessMessages()) {
        //Game loop
    }

    return 0;
}
