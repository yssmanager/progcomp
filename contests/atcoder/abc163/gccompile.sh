#!/bin/bash

if [ $# = 1 ]
then
    CURRENT=$(cd $(dirname $0);pwd)
    CONTEST=$(basename ${CURRENT})
    g++ -std=gnu++17 -O2 $1/${CONTEST}_$1.cpp
fi