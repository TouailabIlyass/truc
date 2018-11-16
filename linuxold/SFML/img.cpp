#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

int main()
{
    sf::RenderWindow window(sf::VideoMode(700, 700), "SFML works!");
    
    sf::Texture pt;
    sf::Sprite sp;
    pt.loadFromFile("t.jpg");
    sp.setTexture(pt);
    //sp.setPosition(100,100);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {  
            if (event.type == sf::Event::Closed)
                window.close();
        }

        sp.setTextureRect(sf::IntRect(100,200,90,90));
        window.clear();
        window.draw(sp);
        window.display();
 
    }

    return 0;
}
