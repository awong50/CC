#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    long long heightCows[N];
    long long heightCanes[M];

    for (long long i = 0; i < N; i++) {
        cin >> heightCows[i];
    }

    for (long long i = 0; i < M; i++) {
        cin >> heightCanes[i];
    }

    long long currentCane = 0;

    while (currentCane < M) {
        long long currentBase = 0;
        for (long long i = 0; i < N; i++) {
            if (heightCows[i] >= currentBase) {
                long long eatenHeight;
                if (heightCows[i] >= heightCanes[currentCane]) {
                    eatenHeight = heightCanes[currentCane] - currentBase;
                }
                else {
                    eatenHeight = heightCows[i] - currentBase;
                }
                heightCows[i] += eatenHeight;
                currentBase += eatenHeight;
            }

            if (currentBase >= heightCanes[currentCane]) {
                break;
            }
        }

        currentCane++;
    }

    for (long long i = 0; i < N; i++) {
        cout << heightCows[i] << endl;
    }

    return 0;
}