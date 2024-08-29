#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    int a;
    int b;
    int c;
    int d;

    cin >> a >> b >> c >> d;
    
    if ((b < c) || (a > d)) {
        cout << (b - a) + (d - c) << endl;
    }
    else {
        cout << max(b, d) - min(a, c) << endl;
    }
    


}

