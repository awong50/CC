#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int levels[n];

    for (int i = 0; i < n; i++) {
        cin >> levels[i];
    }

    int currentLevel = 1;
    int amountFought = 0;

    while (q--) {
        int monsterLevel, fightReq;
        cin >> monsterLevel >> fightReq;

        if (currentLevel > levels[monsterLevel - 1]) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            if (fightReq <= amountFought) {
                currentLevel++;
            }
            amountFought++;
        }
    }
}