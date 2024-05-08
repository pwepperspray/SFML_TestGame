#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main() {

	std::cout << "kill me" << std::endl;
	sf::RenderWindow mainwindow(sf::VideoMode(960,540), "Hello World");
	sf::CircleShape c(20);
	mainwindow.setVerticalSyncEnabled(true);

	sf::Image bg1;
	if (!bg1.loadFromFile(".\\testassets\\background_layer_1.png")){
		return -1;
	}
	sf::Texture t1;	
	if (!t1.loadFromImage(bg1)){
		return -1;
	}

	sf::Music music;
	if(!music.openFromFile(".\\data\\bgm\\tm.wav")){
		return -1;
	}
	music.play();

	while(mainwindow.isOpen()){
		sf::Event ev;

		while(mainwindow.pollEvent(ev)){
			if(ev.type == sf::Event::Closed){
				mainwindow.close();
			}

	mainwindow.clear();
	sf::Sprite sprite;
	sprite.setTexture(t1);
	sprite.setScale(3,4);
	mainwindow.draw(sprite);
	mainwindow.display();	
		}
	}
	return 0;
}
