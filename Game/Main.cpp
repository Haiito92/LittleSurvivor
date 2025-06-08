//
// Created by Antoine Hanna on 6/7/2025.
//
#include <windows.h>
#include "Game.h"
#include "LittleEngine/Core/App/App.h"
#include "LittleEngine/Core/Log/Log.h"

using LittleEngine::Core::App;
using LittleEngine::Core::Log;
using LittleSurvivor::Game;


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

    App app;
    Game game;

    app.Init(&game);
    app.Run(hInstance);
    app.Shutdown();

    return 0;
}
