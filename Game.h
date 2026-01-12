#pragma once
#include <SFML/Graphics.hpp>

class Game
{
private:
    sf::RenderWindow window;

    sf::Texture playerTexture;
    sf::Sprite playerSprite;

    sf::Texture trashTexture;
    sf::Sprite trashSprite;

public:
    Game();
    void run();
    void processEvents();
    void update();
    void render();
};
