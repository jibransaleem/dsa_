#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = { 2,2,3};
    int k = 2;
    int r = 0, l = 0;
    int ans = INT_MIN;
    unordered_map<int, int> dict;

    while (r < nums.size()) {
        int val = nums[r];

        // If frequency is within limit, include it
        if (dict[val] < k) {
            dict[val]++;
        } 
        else {
            // Frequency exceeded → finalize the window
            ans = max(ans, r - l);

            // Reset window
            dict.clear();
            l = r;           // Start new window from current r
            dict[val] = 1;   // Include current element in fresh window
        }

        r++;
    }

    // Final check: in case the last window was valid till the end
    ans = max(ans, r - l);

    cout << ans << endl;
    return 0;
}
