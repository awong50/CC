#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[5][5];
    int numberOneRow, numberOneCol;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                numberOneRow = i;
                numberOneCol = j;
            }
        }
    }

    cout << abs(numberOneRow - 2) + abs(numberOneCol - 2);
}