#include <iostream>
using namespace std;

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    int capA, capB, capC, A, B, C;

    cin >> capA >> A >> capB >> B >> capC >> C;

    int n = 1;

    for (int i = 0; i < 100; i++) {
        if (n == 1) {
            int temp = capB - B;
            if (A < temp) {
                B += A;
                A = 0;
            }
            else {
                A -= temp;
                B += temp;
            }
        }
        else if (n == 2) {
            int temp = capC - C;
            if (B < temp) {
                C += B;
                B = 0;
            }
            else {
                B -= temp;
                C += temp;
            }
        }
        else if (n == 3) {
            int temp = capA - A;
            if (C < temp) {
                A += C;
                C = 0;
            }
            else {
                C -= temp;
                A += temp;
            }
        }
        if (n < 3) {
            n++;
        }
        else {
            n = 1;
        }
    }

    cout << A << '\n' << B << '\n' << C;
}