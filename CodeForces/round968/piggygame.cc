#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        int nums[n];

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        sort(nums, nums + n);

        if (n % 2 == 1) {
            cout << nums[n / 2] << endl;
        }

        else {
            cout << nums[n / 2] << endl;
        }
    }
    
    return 0;
}
