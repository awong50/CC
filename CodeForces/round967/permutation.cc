#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            cout << -1 << endl;
        }
        else {
            vector<int> a(n);

            int toAdd = n;
            for (int i = 0; i < n; i++) {
                a[i] = toAdd;
                if (toAdd > 1) {
                    toAdd -= 2;
                } else {
                    toAdd = 2;
                }
            }

            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}
