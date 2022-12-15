#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

int main() {

    VideoMode vm(1920, 1080);

    RenderWindow window(vm, "PONG!", Style::Titlebar | Style::Close);

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                // Quit the game when the window is closed
                window.close();
            }
        }

        if (Keyboard::isKeyPressed(Keyboard::Escape)) {
            window.close();
        }

        window.clear();
        window.display();
    }

    return 0;
}