#include <iostream>
#include <SFML/Graphics.hpp>


int main(int argc, char const *argv[])
{
	 sf::RenderWindow window(sf::VideoMode(200, 200), "Mouse Event");
       
    while (window.isOpen())
    {
        sf::Event e;
        if (window.pollEvent(e))
        {  switch(e.type)
        	{
        	case sf::Event::Closed: window.close();break;
        	case sf::Event::MouseEntered: std::cout<<" entered !!\n"; break;
        	case sf::Event::MouseLeft: std::cout<<" left !!\n"; break;
        	case sf::Event::GainedFocus:std::cout<<"window is focus\n";break;
        	case sf::Event::LostFocus:std::cout<<"window is lost\n";break;
        	case sf::Event::Resized:std::cout<<" width : "<<e.size.width<<" Height "<<e.size.height<<std::endl;break;
        	case sf::Event::TextEntered:std::cout<<(char)e.text.unicode; fflush(stdout); break;
        	}
        }
        window.clear();
        window.display();
    }


	return 0;
}