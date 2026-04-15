#ifndef GAME_HPP
#define GAME_HPP


#include <string>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include <TextureManager.hpp>


class Game
{
  private:
  // Members
    TextureManager tm;
    sf::Event event;
    sf::VideoMode video_mode;
    sf::RenderWindow window;
    bool are_assets_loaded;

  // Private Methods
    void window_close_event();
  
  public:
  // Constructor and Destructor
    Game(const std::string&, unsigned, unsigned);
  
  // Public Methods
    bool is_window_open() const;
    void update();
    void draw();
    void load_assets();
};


#endif
