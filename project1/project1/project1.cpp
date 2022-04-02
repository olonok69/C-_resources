// project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <stdio.h>
#include <iostream>
#include "utils.h"


int main() {

    // TODO: define two floating point numbers. Assign 12.07 to the
    // first floating point number. Assign 65.102 to the 
    // second floating point number.
    float first_float;
    first_float = 12.07;

    float second_float;
    second_float = 65.102;


    // TODO: Calculate the sum of the two floating point variables into
    // the float_sum variable.

    float float_sum;
    float_sum = second_float + first_float;
    std::cout << float_sum << std::endl;

    // TODO: Calculate difference between the second and first number
    // output the results to cout. 
    float difference;
    difference = second_float - first_float;
    std::cout << difference << std::endl;
    // TODO: Calculate second_float / first_float and output the results
    // to cout.
    float division;
    division = second_float / first_float;
    std::cout << division << std::endl;

    // TODO: Calculate the product of the two numbers and output the results
    // to cout.
    float multiplicacion;
    multiplicacion = second_float * first_float;
    std::cout << multiplicacion << std::endl;


    // define floating point numbers    
    float float_numa;
    float float_suma = 0;

    double double_num;
    double double_sum = 0;

    int divisions = 100000;

    // divide the floating point numbers by divisions
    float_numa = 11.0 / divisions;
    double_num = 11.0 / divisions;

    // sum the number by the number of divisions to see how close the results
    // get to 11.0
    for (int i = 0; i < divisions; i++) {
        float_suma = float_numa + float_numa;
        double_sum = double_sum + double_num;

    }

    printf("Floating point sum: %.15g\n", float_suma);
    printf("Double sum: %.15g\n", double_sum);

    // conditionals
    int x = 5;
    if (x > 0) {
        std::cout << "Positive Number" << std::endl;
    }
    else if (x < 0) {
        std::cout << "Negative Number" << std::endl;
    }
    else {
        std::cout << "Zero" << std::endl;
    }

    
    char status = 'a';

    if (status == 'a') {
        std::cout << "Accelerating" << std::endl;
    }
    else if (status == 'b') {
        std::cout << "Braking" << std::endl;
    }
    else if (status == 'p') {
        std::cout << "Parking" << std::endl;
    }
    else if (status == 'n') {
        std::cout << "Neutral" << std::endl;
    }
    else {
        std::cout << "Unknown" << std::endl;
    }

    // foor loops
    for (int i = 0; i < 80; i++) {
        if (i < 10) {
            std::cout << "slow" << std::endl;
        }
        else if (i < 30) {
            std::cout << "medium" << std::endl;
        }
        else if (i < 70) {
            std::cout << "fast" << std::endl;
        }
        else {
            std::cout << "too fast" << std::endl;
        }

    }

    // switch
    char gear_status = 'N';

    switch (gear_status) {
    case 'D':
        std::cout << "Driving Forward" << std::endl;
        break;
    case 'N':
        std::cout << "Not Moving - Neutral" << std::endl;
        break;
    case 'P':
        std::cout << "Not Moving - Parked" << std::endl;
        break;
    case 'R':
        std::cout << "Driving in Reverse" << std::endl;
        break;
    }

    float a = 1111.1999;
    float b = 2333.01;
    std::cout << close_enough(a,b) << std::endl;

    std::cout << return_string() << std::endl;
    return 0;
}