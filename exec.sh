#!/bin/sh

if  g++ -Wall -std=c++14 src/main.cpp src/google_search.cpp -o bin/exec  
then
    ./bin/exec
fi
