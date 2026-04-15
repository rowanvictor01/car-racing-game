#include <Game.hpp>


int main(void)
{
  Game game("Car Racing", 800, 600);
  game.load_assets();
  
  // Game Loop
  while(game.is_window_open())
  {
    game.update();
    game.draw();
  }

  return 0;
}
