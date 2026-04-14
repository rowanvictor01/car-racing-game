#include <Game.hpp>


// Constructor
Game::Game(std::string title, unsigned width, unsigned height)
{
  this->video_mode.width = width;
  this->video_mode.height = height;

  this->window = new sf::RenderWindow(this->video_mode, title, sf::Style::Titlebar | sf::Style::Close);
  this->window->setFramerateLimit(60);
}


// Destructor
Game::~Game()
{
  delete this->window;
}
  

// Check if player close window
bool Game::is_window_open() const
{
  return this->window->isOpen();
}


// Handles event poll for closing window
void Game::window_close_event()
{
  while(this->window->pollEvent(this->event))
  {
    switch(this->event.type)
    {
      case sf::Event::KeyPressed:
	if(this->event.key.code != sf::Keyboard::Escape) break;
      case sf::Event::Closed:
	this->window->close();
	break;
      default:
	break;
    }
  }
}


// update game states
void Game::update()
{
  this->window_close_event();
}


// render game entities
void Game::draw()
{}
