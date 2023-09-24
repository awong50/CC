#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    int x;
    int y;
    int a;
    int b;

    cin >> a >> b >> x >> y;

    int wayOne = abs(a - x) + abs(b - y);
    int wayTwo = abs(a - y) + abs(b - x);

    if (((abs(b - a)) < wayOne) && ((abs(b - a)) < wayTwo)) {
        cout << abs(b - a);
    }

    else if ((abs(a - x)) > (abs(a - y))) {
        cout << wayTwo; 
    }
    else if ((abs(a - x)) < (abs(a - y))) {
        cout << wayOne; 
    }
}