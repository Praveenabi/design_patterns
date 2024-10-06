#!/bin/bash

#create build directory if not there 
if [ ! -d "build" ]; then
    mkdir build
fi


cd build
rm -rf ./*
cmake ..
make -j8
./app
 