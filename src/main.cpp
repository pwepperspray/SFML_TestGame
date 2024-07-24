#include<iostream>
#include<SFML/Graphics.hpp>


int main(){
	
	
	int width = 940;
	int height = 540;
	float x = width-32;
	float y = height - 64;
	sf::RenderWindow window(sf::VideoMode(width,height), "abc");
	sf::Texture tile;
	tile.loadFromFile("data\\assets\\tileset.png");
	
	sf::Texture bg;
	bg.loadFromFile("data\\assets\\bg.png");
	sf::Sprite background(bg);    
	background.setScale(1.1f,1);
	
	sf::Sprite point(tile);
	point.setTextureRect(sf::IntRect(32,32,32,32));
	point.setPosition(x,y);
	
	sf::Sprite ground;
	ground.setTexture(tile);
	ground.setTextureRect(sf::IntRect(0,0,32,32));
		
	std::cout << y << std::endl;
	
	while(window.isOpen()){
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed){
				window.close();
			}
		}
		
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
			if(x <= width-32){
				point.setPosition(x+=0.5,y);
			}
			std::cout << x << std::endl;
		}
		else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
			if(x >= 0){
				point.setPosition(x-=0.5,y);
			}
			std::cout << x << std::endl;
		}
		else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
			if(y >= 0){
				point.setPosition(x,y-=0.5);
			}
			std::cout << y << std::endl;
		}
		else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
			if(y <= height-(32*2)){
				point.setPosition(x,y+=0.5);
			}
			std::cout << y << std::endl;
		}
		
		
		window.clear();
		window.draw(background);
		for(int x = 0; x <= width; x += 32){
		ground.setPosition(x,height-32);
		window.draw(ground);
		}
		window.draw(point);
		window.display();
	}
	return 0;
}