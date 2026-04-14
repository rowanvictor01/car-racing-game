#ifndef GAME_HPP
#define GAME_HPP


#include <string>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


class Game
{
  private:
  // Members
    sf::RenderWindow* window;
    sf::VideoMode video_mode;
    sf::Event event;

  // Private Methods
    void window_close_event();
  
  public:
  // Constructor and Destructor
    Game(std::string, unsigned, unsigned);
    ~Game();
  
  // Public Methods
    bool is_window_open() const;
    void update();
    void draw();
};


#endif
