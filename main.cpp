/*
 * CS 320: Programming Languages
 * San Diego State University
 * Summer 2021
 *
 * This the driver for the C++ assignment.
 *
 * ToDo: Student should not change.
 *
 *
 */

#include <iostream>

#include "RandomRoom.hpp"
#include "RoomView.hpp"

void test_def_room();
void test_med_room();

int main() {

    test_def_room();
    test_med_room();

    std::cout << "Complete!" << std::endl;
    return 0;
}

void test_def_room(){
    std::cout << "Using Default Constructor . . . " << std::endl;
    RandomRoom<5,5> uut;
    draw(uut);
}

void test_med_room(){
    std::cout << "Using Parameter Constructor . . . (.5)" << std::endl;
    RandomRoom<10,10> *uut = new RandomRoom<10,10>(3,.5);
    draw(*uut);
    std::cout << "Using Parameter Constructor . . . (.5)" << std::endl;

    RandomRoom <10,11> uut2 = RandomRoom<10,11>(3, .5);
    draw(uut2);
    std::cout << "Using Parameter Constructor . . . (0)" << std::endl;

}

