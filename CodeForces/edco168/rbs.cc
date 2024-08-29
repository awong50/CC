#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int minSum = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ')') {
                minSum++;
            }
            if (s[i] == '(') {
                minSum += 3;
            }
        }

        cout << minSum;
    }
}
