#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::Clock c; c.restart();
    sf::Time t=c.getElapsedTime();
    std::cout<<t.asSeconds()<<std::endl;
    std::string str="hello it s me !!!";
    std::string d="";
    int i=0;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {  
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if(window.waitEvent(event))
        {
        	//std::cout<<"ok\n";
        	if (event.type == sf::Event::Closed)
                window.close();

            if (event.type==sf::Event::KeyPressed )
               	std::cout<<"presed\n";
        
        }
        window.clear();
        window.display();
 
    }

    return 0;
}
