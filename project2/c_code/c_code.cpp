#include <vector>
#include <iostream>
using namespace std;


// TODO: Use the standard namespace

// TODO: Write a main function
int main() {
    vector<float> vector1(4);
    vector<float> example;
    vector<float> vectorvar(3, 5.0);
    vector1[0] = 4.5;
    vector1[1] = 2.1;
    vector1[2] = 8.54;
    vector1[3] = 9.0;

    vector<float> vector(4, 3.5);

    

    for (int i = 0; i < 5; i++) {
        example.push_back(i * 5.231);
    }

    for (int i = 0; i < example.size(); i++) {
        cout << example[i] << endl;
    }

    

    for (int i = 0; i < vectorvar.size(); i++) {
        cout << vectorvar[i] << " ";
    }

    cout << endl;

    // Part 2: Use push back to add the values 3.0, 2.5, 1.4 to the back of the vector
    vectorvar.push_back(3.0);
    vectorvar.push_back(2.5);
    vectorvar.push_back(1.4);

    // Part 3: Print out the vector
    for (int i = 0; i < vectorvar.size(); i++) {
        cout << vectorvar[i] << " ";
    }
    cout << "\n";

    // Part 4: Use the assign method so that the current vector has values 
    // {5.0, 5.0, 5.0}
    vectorvar.assign(3, 5.0);

    // Part 5: Print out the vector
    for (int i = 0; i < vectorvar.size(); i++) {
        cout << vectorvar[i] << " ";
    }

    cout << "\n";

    return 0;
}