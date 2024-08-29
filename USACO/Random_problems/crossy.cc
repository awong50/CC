#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct State {
    int pos, swimDistance;
    bool inWater;
};

bool canReachRightBank(int n, int m, int k, const string& path) {
    queue<State> dude;
    dude.push({0, 0, false});

    vector<bool> visitedSteps(n + 2, false);

    visitedSteps[0] = true;

    while (!dude.empty()) {
        State current = dude.front();
        dude.pop();

        if (current.pos == n + 1) {
            return true;
        }

        if (!current.inWater) {
            for (int i = 1; i <= m; ++i) {
                int nextPos = current.pos + i;
                if (nextPos <= n + 1 && !visitedSteps[nextPos] && (nextPos == n + 1 || path[nextPos - 1] != 'C')) {
                    visitedSteps[nextPos] = true;
                    dude.push({nextPos, current.swimDistance, nextPos != n + 1 && path[nextPos - 1] == 'W'});
                }
            }
        }

        if (current.inWater) {
            int nextPos = current.pos + 1;
            if (nextPos <= n + 1 && !visitedSteps[nextPos] && (nextPos == n + 1 || path[nextPos - 1] != 'C')) {
                if (current.swimDistance + 1 <= k) {
                    visitedSteps[nextPos] = true;
                    dude.push({nextPos, current.swimDistance + 1, nextPos != n + 1 && path[nextPos - 1] == 'W'});
                }
            }
        }
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        string path;

        cin >> n >> m >> k >> path;

        if (canReachRightBank(n, m, k, path)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}