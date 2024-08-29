#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string word;
    string wordFinal = "";

    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        char lowerChar = tolower(word[i]);
        if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u' || lowerChar == 'y') {
            continue;
        }
        else {
            wordFinal += ".";
            wordFinal += lowerChar;
        }
    }

    cout << wordFinal << endl;

    return 0;
}
