#include <Game.hpp>


int main(void)
{
  Game game("Car Racing", 800, 600);
  
  while(game.is_window_open())
  {
    game.update();
    game.draw();
  }

  return 0;
}
