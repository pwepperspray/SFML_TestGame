@echo off
g++ -c C:\Users\jacques_lully\Desktop\game\testgame\src\main.cpp -IC:\Users\jacques_lully\Desktop\game\testgame\libs\include
g++ main.o -o C:\Users\jacques_lully\Desktop\game\testgame\sfml-app -LC:\Users\jacques_lully\Desktop\game\testgame\libs\lib -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system
