#include <SFML/Window.hpp>
#include <raylib.h>
#include <fmt/color.h>

int main() {
   sf::Window win{ sf::VideoMode(600, 600), "SFML" };

   while (win.isOpen())
   {
      sf::Event e;
      while (win.pollEvent(e)) {
         if (e.type == sf::Event::Closed) win.close();
      }
   }

   InitWindow(600, 600, "Raylib");
   while (!WindowShouldClose())
   {
      BeginDrawing();
      ClearBackground(GRAY);
      EndDrawing();
   }
   CloseWindow();

   fmt::print(fg(fmt::color::green) | fmt::emphasis::bold, "Hello world!\n");
}
