#!/bin/bash
gcc -c ./*.c ./*.h
ar -rc liball.a ./*.o
