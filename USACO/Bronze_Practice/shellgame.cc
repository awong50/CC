#include <iostream>
using namespace std;


int main() {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int N;

    cin >> N;

    int positions[3] = {1, 0, 0};
    int positions2[3] = {0, 1, 0};
    int positions3[3] = {0, 0, 1};

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for (int i = 0; i < N; i++) {
        int a, b, g;
        cin >> a >> b >> g;

        a -= 1;
        b -= 1;
        g -= 1;

        int temp = positions[a];
        positions[a] = positions[b];
        positions[b] = temp;

        if (positions[g] == 1) {
            count1++;
        }

        int temp2 = positions2[a];
        positions2[a] = positions2[b];
        positions2[b] = temp2;

        if (positions2[g] == 1) {
            count2++;
        }

        int temp3 = positions3[a];
        positions3[a] = positions3[b];
        positions3[b] = temp3;

        if (positions3[g] == 1) {
            count3++;
        }
    }

    if (count1 > count2 && count1 > count3) {
        cout << count1;
    }
    else if (count2 > count1 && count2 > count3) {
        cout << count2;
    }
    else {
        cout << count3;
    }
}