#include <Game.hpp>


// Constructor
Game::Game(const std::string& title, unsigned width, unsigned height)
{
  this->video_mode.width = width;
  this->video_mode.height = height;
  this->are_assets_loaded = false;

  this->window.create(sf::VideoMode(width, height), title, sf::Style::Titlebar | sf::Style::Close);
  this->window.setFramerateLimit(60);
}


// Check if player close window
bool Game::is_window_open() const
{
  return this->window.isOpen();
}


// Handles event poll for closing window
void Game::window_close_event()
{
  while(this->window.pollEvent(this->event))
  {
    switch(this->event.type)
    {
      case sf::Event::KeyPressed:
	if(this->event.key.code != sf::Keyboard::Escape) break;
      case sf::Event::Closed:
	this->window.close();
	break;
      default:
	break;
    }
  }
}


void Game::load_assets()
{
  if(this->are_assets_loaded) return;

  // tm = texture_manager
  this->tm.load("/home/rowan-victor/Projects/cpp/car-racing-game/assets/imgs/track.png", "track");
  this->tm.load("/home/rowan-victor/Projects/cpp/car-racing-game/assets/imgs/track-border.png", "track_border");

  this->tm.load("/home/rowan-victor/Projects/cpp/car-racing-game/assets/imgs/grass.jpg", "grass");
  this->tm.load("/home/rowan-victor/Projects/cpp/car-racing-game/assets/imgs/finish.png", "finish");

  this->tm.load("/home/rowan-victor/Projects/cpp/car-racing-game/assets/imgs/red-car.png", "red_car");
  this->tm.load("/home/rowan-victor/Projects/cpp/car-racing-game/assets/imgs/white-car.png", "white_car");

  this->are_assets_loaded = true;
}


// update game states
void Game::update()
{
  this->window_close_event();
}


// render game entities
void Game::draw()
{}
