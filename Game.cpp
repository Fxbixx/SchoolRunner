#include "Game.h"

Game::Game()
    : window(sf::VideoMode(800, 600), "School Runner")
{
    playerTexture.loadFromFile("assets/player.png");
    playerSprite.setTexture(playerTexture);
    playerSprite.setPosition(100, 400);

    trashTexture.loadFromFile("assets/trashcan.png");
    trashSprite.setTexture(trashTexture);
    trashSprite.setPosition(600, 400);
}

void Game::run()
{
    while (window.isOpen())
    {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents()
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();

        if (event.type == sf::Event::KeyPressed &&
            event.key.code == sf::Keyboard::Space)
        {
            playerSprite.move(0, -60); // Jump
        }
    }
}

void Game::update()
{
    trashSprite.move(-0.1f, 0); // Hindernis bewegt sich
}

void Game::render()
{
    window.clear(sf::Color(100, 180, 250)); // Himmelblau
    window.draw(playerSprite);
    window.draw(trashSprite);
    window.display();
}
