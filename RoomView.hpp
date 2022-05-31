/*
 * CS 320: Programming Languages
 * San Diego State University
 * Summer 2021
 *
 * Contains tools for displaying the contents of a 'room' represented
 * by a char array.
 *
 * Note: STUDENTS SHOULD NOT MODIFY
 *
 *
 * Given in player units. rows by cols
 * Chance of split.
 * Number of exits.
 *
 * Use:
 *
 * char rows = 80;
 * char cols = 80;
 * char nexit = 4;
 * double psplit = .3;
 * RandomRoom *heapRoom = new RandomRoom(rows, cols, nexit, psplit);
 * RandomRoom stackRoom(rows, cols, nexit, psplit);
 *
 * draw(*heapRoom);
 * draw(stackRoom);
 *
 */

#pragma once

#include <map>
#include "RandomRoom.hpp"

/*
 * Given an array of 8-bit characters, this function remaps them and
 * displays the output using the standard output device.
 *
 * Input: char matrix to convert and display
 * Output: void (direct to screen)
 */


std::map<char,char> getReplacements(){
    std::map<char,char> replacements;
    replacements[-1] = '.';
    replacements[0] = 'x';
    replacements[1] = ' ';
    replacements[2] = '|';
    replacements[3] = '-';
    return replacements;
}

template <int rows, int cols>
void draw( RandomRoom<rows,cols> room);

template <int rows, int cols>
void draw( RandomRoom<rows,cols> room) {
    std::cout << "Drawing the room . . ." << std::endl;

    draw<rows,cols>(room, getReplacements());
}


template <int rows, int cols>
void draw(RandomRoom<rows,cols>room, std::map<char,char> replacements){
    for( int rowC = 0; rowC < rows; rowC++) {
        for (int colC = 0; colC < cols; colC++) {
            std::cout << replacements[room[rowC][colC]];
        }
        std::cout << std::endl;
    }
}

