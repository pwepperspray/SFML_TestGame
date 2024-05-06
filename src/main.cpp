#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main() {

	std::cout << "kill me" << std::endl;
	sf::RenderWindow mainwindow(sf::VideoMode(640,480), "Hello World");
	sf::CircleShape c(20);

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
		mainwindow.draw(c);
	        mainwindow.display();	
		}
	}
	return 0;
}
