@echo off
g++ -c main.cpp -IC:\Users\jacques_lully\Desktop\game1\lib\include
g++ main.o -o main -LC:\Users\jacques_lully\Desktop\game1\lib\lib -lsfml-graphics -lsfml-window -lsfml-system sfml-app.exe
