#include <SFML/Graphics.hpp>
#include "World.h"
#include "Camera.h"
#include "Polygon.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode({ 1280, 720 }), "My game!");
    window.setFramerateLimit(60);
    World world;


    Polygon wall({{0,0}, {50,50}, {125,25}});
    world.addObject("wall", std::make_shared<Polygon> (wall));
    Camera camera({ 60,60 });
    world.addObject("camera", std::make_shared<Camera>(camera));


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) 
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        world.draw(window);
        window.display();
    }

    return 0;
}
