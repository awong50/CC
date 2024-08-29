#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    int scores[n];

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int passed = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] > 0 && scores[i] >= scores[k-1]) {
            passed++;
        }
    }
    cout << passed << endl;
    }
