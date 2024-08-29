#include <iostream>
#include <vector>
using namespace std;

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int M, N, K;
    cin >> M >> N >> K;

    vector<string> org(M);
    for (int i = 0; i < M; i++) {
        cin >> org[i];
    }

    vector<string> newArr(M * K, string(N * K, ' '));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            char ch = org[i][j];
            for (int x = 0; x < K; x++) {
                for (int y = 0; y < K; y++) {
                    newArr[i * K + x][j * K + y] = ch;
                }
            }
        }
    }

    for (const auto &row : newArr) {
        cout << row << '\n';
    }

    return 0;
}
