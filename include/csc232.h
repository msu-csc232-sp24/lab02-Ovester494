/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2021
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 0.1
 * @date    9/10/2021
 *
 * @copyright Copyright (c) 2021 James R. Daehn
 */

#ifndef CSC232_COMMON_H_
#define CSC232_COMMON_H_

#define FALSE 0
#define TRUE 1
#define EXECUTE_BLOCK FALSE

#define FINISHED_PART_1 TRUE
#define FINISHED_PART_2 TRUE
#define FINISHED_PART_3 TRUE

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <utility>
#include <vector>

#include "expanded_templates.h"

/** Common iostream objects */
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

/** Common iomanip objects */
using std::left;
using std::right;
using std::setprecision;
using std::setw;

/**
 * @brief Common namespace for CSC232 identifiers.
 */
namespace csc232
{
    // Add any user-defined functions prescribed in your assignment below
    // TODO: 1.1 Declare the Shape interface below
    class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0; 
    virtual ~Shape() = default;
};
    // TODO: 2.1 Provide an inline definition of the Square class below
    inline double Shape(int side);
    class Square : public Shape {
public:
    double area() override {
       double area = side * side;
       double perimeter = 4 * side;
    }
    ~Square() = default;
private:
    double side;
};
    // TODO: 3.1 Provide an inline definition of the Circle class below
inline double Shape(int r);
    class Circle : public Shape {
public:
    double area() override {
       double area = r * r * 3.14;
       double perimeter = 2 * 3.14 * r;
    }
    ~Circle() = default;
private:
    double r;
    // DO NOT Modify anything below this line
}; // namespace csc232

#endif // CSC232_COMMON_H_
