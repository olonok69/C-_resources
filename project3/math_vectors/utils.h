#pragma once
#include <iostream>
#include <vector>

using namespace std;

vector<float> vectorsubtraction(vector<float> vector1, vector<float> vector2) {

	vector<float> vectordifference(vector1.size());

	for (int i = 0; i < vector1.size(); i++) {
		vectordifference[i] = vector1[i] - vector2[i];
	}

	return vectordifference;

}
vector<float> vectormultiply(vector<float> vector1, vector<float> vector2) {

	vector<float> vectorproduct(vector1.size());

	for (int i = 0; i < vector1.size(); i++) {
		vectorproduct[i] = vector1[i] * vector2[i];
	}

	return vectorproduct;

}