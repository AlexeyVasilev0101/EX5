#include "fird.h"

void full3(int** mass, int n, int k) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < k; j++)
        {
            mass[i][j] = rand() % 41 + 10;
        }
}

void print3(int** mass, int n, int k) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++)
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
}