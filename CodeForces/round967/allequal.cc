#include <iostream>
#include <unordered_map> 
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int nums[n];

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        unordered_map<int, int> frequencyMap;
        int maxFrequency = 0;

        for (int i = 0; i < n; i++) {
            frequencyMap[nums[i]]++;
            if (frequencyMap[nums[i]] > maxFrequency) {
                maxFrequency = frequencyMap[nums[i]];
            }
        }

        cout << n - maxFrequency << endl;
    }

    return 0;
}
