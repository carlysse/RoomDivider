/*
 * Carlysse Nycole Castro
 * CS 320: Programming Languages
 * San Diego State University
 * Summer 2021
 *
 * Contains tools for displaying the contents of a 'room' represented
 * by a char array.
 *
 * Note: STUDENTS SHALL MODIFY
 */

#ifndef PROG3_RANDOMROOM_HPP
#define PROG3_RANDOMROOM_HPP

#define DEF_ROWS  16
#define DEF_COLS  16
#define DEF_EXITS 2
#define DEF_PROB  0.75

#include <random>
#include <iomanip>
using namespace std;
using std::setprecision;

constexpr int FLOAT_MIN = 0;
constexpr int FLOAT_MAX = 1;

template<int rows, int cols>
struct RandomRoom {

    void drawBorder() {
        // Creates the borders of the room
        for (int rowC = 0; rowC < rows; rowC++) {
            for (int colC = 0; colC < cols; colC++)
                if ((rowC == 0) || (rowC == rows - 1) || (colC == 0) || (colC == cols - 1)) {
                    theRoom[rowC][colC] = 0;
                } else {
                    theRoom[rowC][colC] = -1;
                }
        }
    }

    // Creates a horizontal division of the room if probability allows it
    void hSplit() {
        // Random function used to determine split probability
        std::random_device rd;
        std::default_random_engine eng(rd());
        std::uniform_real_distribution<float> distr(FLOAT_MIN, FLOAT_MAX);

        double division = (distr(eng));

        int minRow = 2;
        int divLine;
        if (division < pDivide) {
            divLine =  (rand()) / (RAND_MAX/((rows - 2) - minRow)) + minRow;
            for (int rowC = 2; rowC < rows - 2; rowC++) {
                for (int colC = 1; colC < cols - 1; colC++) {
                    // Draws split horizontally
                    if (rowC == divLine) {
                        theRoom[rowC][colC] = 3;
                    }
                }
            }
        }

        // Calls for random again: if less than pDivide, divides room vertically
        double div = (distr(eng));
        if (div < pDivide && division < pDivide) {
            vSplit(divLine, div);
        }
    }

    // Creates a vertical division of the room if probability allows it
    void vSplit(int hLine, double divProb) {
        // Random function used to determine split probability
        std::random_device rd;
        std::default_random_engine eng(rd());
        std::uniform_real_distribution<float> distr(FLOAT_MIN, FLOAT_MAX);

        int minCol = 2;
        if (divProb < pDivide) {
            double divLine =  (rand()) / (RAND_MAX/((cols - 2) - minCol)) + minCol;
            for (int rowC = 1; rowC < hLine; rowC++) {
                for (int colC = 2; colC < cols - 2; colC++) {
                    // Draws split vertically
                    if (colC == divLine) {
                        theRoom[rowC][colC] = 2;
                    }
                }
            }
        }
    }

    // Draws exits throughout the room
    void drawExits(int numExits) {
        if (numExits < 3) {
            theRoom[1][0] = 1;
            theRoom[rows - 2][cols - 1] = 1;
        }
        else {
            theRoom[1][0] = 1;
            theRoom[1][cols - 1] = 1;
            theRoom[rows - 1][cols - 3] = 1;
        }

    }

/// Parameterized Constructor (provided for education, but a dumb comment in production)
    RandomRoom(int exits, double pDivide) :
            nExits(exits), pDivide(pDivide) {

        drawBorder();
        hSplit();
        drawExits(nExits);

    }


    /// Default
    RandomRoom() : RandomRoom(DEF_EXITS, DEF_PROB) {
    };


    /// A destructor (provided for education, but a dumb comment in production)
    virtual ~RandomRoom() {};

    /// Provides a direct link to the internal mapping of the structure.
    ///
    /// \return A pointer to a row of row data.
    virtual int *operator[](int index) { return (theRoom[index]); };

private:
    // These instance variables appear on a stack frame whenever we request an instance of the RandomRoom Class,
    // So every room gets its own version to modify
    int nExits;
    double pDivide;
    int theRoom[rows][cols];

};


#endif //PROG3_RANDOMROOM_HPP
