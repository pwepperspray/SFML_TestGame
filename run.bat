REM This script runs the compiler and links the libraries in the libs folder
@echo off
g++ -c .\src\main.cpp -I.\libs\include
g++ main.o -o a -static-libgcc -static-libstdc++ -L.\libs\lib -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system
