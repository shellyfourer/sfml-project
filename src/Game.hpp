#pragma once //prevents multiple inclusions of this file
#include <SFML/Graphics.hpp>
#include "Player.hpp"
#include "Ghost.hpp"
#include "Map.hpp"
#include <vector>

//blueprint of the game engine wrapper that controls the game window, the game loop, and the rendering of all elements

class Game {
public:
    Game(); //Constructor to initialize the game
    void run(); //Main game loop
private:
    sf:: RenderWindow window; //SFML window for rendering the game
    Player player; //Player object (one player)
    std::vector<Ghost> ghosts; //Vector to hold multiple ghost objects
    Map map; //Map object to hold the game map
    void processEvents(); //Handle user input and events
    void update(); //Update game state
    void render(); //Render the game elements to the window
};


