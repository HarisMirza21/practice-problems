#!/bin/bash

CXX="g++"
CXXFLAGS="-Wall -std=c++11 -g -O3 -Wall"

# Compile all programs
for i in {1..4}; do
    echo "Compiling q$i.cpp"
    $CXX $CXXFLAGS -o "q$i" "q$i.cpp"
done

# Clean function
if [ "$1" = "clean" ]; then
    rm -f q1 q2 q3 q4
fi
