#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
 int main()
 {
     sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
         sf::Texture tex;
         tex.create(10,30);
         sf::Sprite sprite;
         sprite.setColor(sf::Color::Green);
         sprite.setTexture(tex);
         sprite.setPosition(200,100);
     while (window.isOpen())
     {
         sf::Event Event;
         while (window.pollEvent(Event))
         {
             if (Event.type == sf::Event::Closed)
                 window.close();
                         if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                                 sprite.move(-10,0);
                         if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                                 sprite.move(10,0);
                         if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
                                 sprite.move(0,-10);
                         if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
                                 sprite.move(0,10);
                 }
                 window.clear(sf::Color::White);
         window.draw(sprite);
         window.display();
     }
     return EXIT_SUCCESS;
 }
 
