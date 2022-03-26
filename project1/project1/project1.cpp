// project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>

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

    return 0;
}