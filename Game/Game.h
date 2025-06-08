//
// Created by Antoine Hanna on 08/06/2025
//
#ifndef GAME_H
#define GAME_H
#pragma once
#include "LittleEngine/Core/Game/IGame.h"

namespace LittleSurvivor {

    using LittleEngine::Core::IGame;

    class Game : public IGame{
    public:
        Game();
        Game(const Game&) = delete;
        Game(Game&&) = delete;
        ~Game() override;

        Game& operator=(const Game&) = delete;
        Game& operator=(Game&&) = delete;

        void Init() override;
        void Update(float deltaTime) override;
        void Render() override;
        void Shutdown() override;
    private:
    };
} // LittleSurvivor

#endif //GAME_H
