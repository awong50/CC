#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        char cells[2][n];  
        int countCells = 0;

        for (int i = 0; i < 2; i++) {
            for (int k = 0; k < n; k++) {
                cin >> cells[i][k];
            }
        }

        for (int i = 0; i < 2; i++) {
            for (int k = 0; k < n; k++) {
                if (cells[i][k] == '.') {
                    int periodCount = 0;

                    if (i > 0 && cells[i - 1][k] == '.') {
                        periodCount++;
                    }

                    if (i < 1 && cells[i + 1][k] == '.') {
                        periodCount++;
                    }

                    if (k > 0 && cells[i][k - 1] == '.') {
                        periodCount++;
                    }

                    if (k < n - 1 && cells[i][k + 1] == '.') {
                        periodCount++;
                    }


                    int diagonalXCount = 0;

                    if (i > 0 && k > 0 && cells[i - 1][k - 1] == 'x') {
                        diagonalXCount++;
                    }

                    if (i > 0 && k < n - 1 && cells[i - 1][k + 1] == 'x') {
                        diagonalXCount++;
                    }

                    if (i < 1 && k > 0 && cells[i + 1][k - 1] == 'x') {
                        diagonalXCount++;
                    }

                    if (i < 1 && k < n - 1 && cells[i + 1][k + 1] == 'x') {
                        diagonalXCount++;
                    }

                    if (periodCount >= 3 && diagonalXCount == 2) {
                        countCells++;
                    }
                }
            }
        }

        cout << countCells << endl;
    }

    return 0;
}

