#include "second.h"

void replace2(int* mass, int size) {
	for (int i = 1; i < size; i += 2) {
		int save = mass[i - 1];
		mass[i - 1] = mass[i];
		mass[i] = save;
	}
}

void print2(int* mass, int size) {
	for (int i = 0; i < size; i++) {
		cout << mass[i] << " ";
	}
	cout << endl;
}