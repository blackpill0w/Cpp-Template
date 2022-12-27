#include <SFML/Window.hpp>

int main() {
   sf::Window win{ sf::VideoMode(600, 600), "SFML" };

   while (win.isOpen()) {
      sf::Event e;
      while (win.pollEvent(e)) {
         if (e.type == sf::Event::Closed) win.close();
      }
   }
}
