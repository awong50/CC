#include <iostream>
using namespace std;


bool rahh(long long N, long long arr[], long long start) {
    for (long long i = start; i < N - 1; i++) {
        if (arr[N] == arr[N + 1] && arr[N] == 1) {
            return false;
        }
    }
}
void rah(long long N, long long arr[], long long counter) {
    for (long long i = counter; i < N - 1; i++) {
        if (arr[i] == 1 && i == 0) {
            arr[i + 1] = 0;
        }
        else if (arr[i] == 1) {
            arr[i - 1] = 0;
            arr[i + 1] = 0;
        }
    }
}

int main() {
    long long N;
    string bitstring;

    cin >> N >> bitstring;

    long long bitarray[N];
    long long bitarrayo[N];
    for (long long i = 0; i < bitstring.length(); i++) {
        bitarray[i] = bitstring[i] - '0';
    }

    long long counter = 0;

    for (long long i = 0; i < N; i++) {
            bitarrayo[i] = bitarray[i];
        }

    while (rahh(N, bitarrayo, 0) == false) {
        for (long long i = 0; i < N; i++) {
            bitarrayo[i] = bitarray[i];
        }
        rah(N, bitarrayo, counter);
    }

    for (long long i = 0; i < N; i++) {
        cout << bitarrayo[i];
    }
    return 0;
}