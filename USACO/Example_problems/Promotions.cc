#include <iostream>
using namespace std;

int main() {
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;

    int silverPromotion = 0;
    int goldPromotion = 0;
    int platPromotion = 0;

    platPromotion += h - g;
    goldPromotion += f - e + h - g;
    silverPromotion += d - c + f - e + h - g;
    cout << silverPromotion << endl << goldPromotion << endl << platPromotion << endl;
}

 