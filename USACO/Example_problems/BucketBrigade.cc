#include <iostream>
using namespace std;

int main() {
    freopen("buckets.in","r",stdin);
    freopen("buckets.out","w",stdout);
    int LX, LY, BX, BY, RX, RY;
    for (int i = 0; i < 10; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < 10; j++) {

            if (s[j] == 'B') {
                BX = i;
                BY = j;
            }
            if (s[j] == 'L') {
                LX = i;
                LY = j;
            }
            if (s[j] == 'R') {
                RX = i;
                RY = j;
            }
        }
    }
    int dist_br = abs(BX-RX)+abs(BY-RY);
    int dist_bl = abs(BX-LX)+abs(BY-LY);
    int dist_rl = abs(RX-LX)+abs(RY-LY);

    if ((BX==LX || BY==LY) && dist_bl == dist_br + dist_rl)
        cout << dist_bl + 1 << "\n";
    else
        cout << dist_bl - 1 << "\n";
}