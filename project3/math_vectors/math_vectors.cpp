#include <iostream>
#include <vector>
#include "utils.h"

using namespace std;
// function declaration
vector<float> vectorsubtraction(vector<float> vector1, vector<float> vector2);
vector<float> vectormultiply(vector<float> vector1, vector<float> vector2);

int main() {

    vector<int> exampleone(5);
    vector<int> exampletwo(5);
    vector<int> examplesum(5);
    // declare and initialize vectors
    vector<float> v1(3);
    vector<float> v2(3);

    vector<float> v3(5);
    vector<float> v4(5);

    exampleone[0] = 2;
    exampleone[1] = 6;
    exampleone[2] = 25;
    exampleone[3] = 1;
    exampleone[4] = 18;

    exampletwo[0] = 3;
    exampletwo[1] = 19;
    exampletwo[2] = 8;
    exampletwo[3] = 12;
    exampletwo[4] = 191;

    cout << "vector one ";

    // print out the first vector
    for (int i = 0; i < exampleone.size(); i++) {
        cout << exampleone[i] << " ";
    }

    // create a new line in the terminal
    cout << endl;

    cout << "vector two ";

    // print out the second vector
    for (int i = 0; i < exampletwo.size(); i++) {
        cout << exampletwo[i] << " ";
    }

    // create a new line in the terminal
    cout << endl;

    cout << "vector sum ";

    //add the vectors together
    for (int i = 0; i < exampleone.size(); i++) {
        examplesum[i] = exampleone[i] + exampletwo[i];
    }

    // print out the vector
    for (int i = 0; i < examplesum.size(); i++) {
        cout << examplesum[i] << " ";
    }

    // create a new line in the terminal
    cout << endl;

    v1[0] = 5.0;
    v1[1] = 10.0;
    v1[2] = 27.0;

    v2[0] = 2.0;
    v2[1] = 17.0;
    v2[2] = 12.0;

    vector<float> v5(v1.size());

    // calculate the difference between the two vectors
    v5 = vectorsubtraction(v1, v2);

    // print out the results of the vector subtraction
    for (int i = 0; i < v5.size(); i++) {
        cout << v5[i] << " ";
    }

    cout << endl;

    v3[0] = 17.0;
    v3[1] = 10.0;
    v3[2] = 31.0;
    v3[3] = 5.0;
    v3[4] = 7.0;

    v4[0] = 3.0;
    v4[1] = 1.0;
    v4[2] = 6.0;
    v4[3] = 19.0;
    v4[4] = 8.0;

    vector<float> v6(v3.size());

    // calculate the difference between the two vectors
    v6 = vectormultiply(v3, v4);

    // print out the results of the vector multiplication
    for (int i = 0; i < v6.size(); i++) {
        cout << v6[i] << " ";
    }

    cout << endl;

    return 0;
}