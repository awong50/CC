#include <iostream>
#include <string.h>
using namespace std;

char findChar(char c1, char c2) {
    for (char c = 'a'; c <= 'z'; ++c) {
        if (c != c1 && c != c2) {
            return c;
        }
    }
    return 'a'; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string password;
        cin >> password;

        bool inserted = false;

        for (int i = 0; i < password.length() - 1; i++) {
            if (password[i] == password[i + 1]) {
                password.insert(i + 1, 1, findChar(password[i], password[i + 1]));
                inserted = true;
                break;
            }
        }

        if (!inserted) {
            password.push_back(findChar(password.back(), password.back()));
        }
        cout << password << endl;
    }  
}