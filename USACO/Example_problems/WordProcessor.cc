#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
     freopen("word.in", "r", stdin);
     freopen("word.out", "w", stdout);
    int N;
    int K;
    int currentLineSize = 0;
    cin >> N  >> K;

    string strArr[N];
    string finalString = "";

    for (int i = 0; i < N; i++) {
        cin >> strArr[i];
    }

    int len = sizeof(strArr) / sizeof(strArr[0]);
    
    for (int i = 0; i < len; i++) {
        if (currentLineSize + strArr[i].length() <= K) {
            currentLineSize += strArr[i].length();
            if ((currentLineSize + strArr[i + 1].length() <= K)) {
                finalString += strArr[i];
                finalString += " ";
            }
            else {
                finalString += strArr[i];
            }

        }
        else {
            currentLineSize = strArr[i].length();
            finalString += "\n" + strArr[i];
            if ((currentLineSize + strArr[i + 1].length() <= K) && i != 0) {
                finalString += " ";
            }
        }
    }
    cout << finalString;
}   