#include "first.h"

double* create1(double* mass, int size) {
	mass = new double[size];
	return mass;
}

void full1(double* mass, int size) {
	for (int i = 0; i < size; i++) {
		mass[i] = rand() % 200 - 100;
	}
}

void print1(double* mass, int size) {
	for (int i = 0; i < size; i++) {
		cout << mass[i] << " ";
	}
	cout << endl;
}

void del1(double* mass) {
	delete[] mass;
}