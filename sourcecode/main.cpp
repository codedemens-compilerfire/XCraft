
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

#include <iostream>
#include <string>
#include <memory>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <vector>
#include <list>

int main(int argc, char* argv[]) {

    sf::RenderWindow rw;
    rw.create(sf::VideoMode(640, 480), "XCraft", sf::Style::Close);

    while (rw.isOpen()) {
        sf::Event e;
        while (rw.pollEvent(e)) {
            if (e.type == sf::Event::EventType::Closed) {
                rw.close();
            }
        }

        rw.clear(sf::Color::Black);
        rw.display();
    }

    return 0;
}