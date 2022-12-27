#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

int main() {
   sf::Window win{ sf::VideoMode(600, 600), "OpenGL" };

   while (win.isOpen()) {
      sf::Event e;
      while (win.pollEvent(e)) {
         if (e.type == sf::Event::Closed) win.close();
      }
   }
}
