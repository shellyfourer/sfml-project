#include "Game.hpp" //brings in the class declaration

//the constructor for the blueprint of the game engine wrapper

Game::Game()
    : window(sf::VideoMode({1920u, 1080u}), "PAC-MAN") {
    window.setFramerateLimit(144);
    //initialize player, ghosts, and map
}
void Game::run() {
    while (window.isOpen()) {
        processEvents();
        update();
        render();
    }
}
void Game::processEvents() {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }
        }
void Game::update() {
    //Update player movement, ghost AI, collisions, etc.
}
void Game::render() {
    window.clear(); //Clear the window with the default color
    window.display(); //Display the contents of the window
}
