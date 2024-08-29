#include <iostream>
using namespace std;

int main() {
     int k;
     int w;
     int n;
     int counter = 0;

     cin >> k >> n >> w;

     for (int i = 1; i <= w; i++) {
        counter += (k * i);
     }

     if (counter > n) {
        cout << counter - n;
     }
     else {
        cout << 0;
     }
}