#include <bits/stdc++.h>
using namespace std;

using ll = long long;
unordered_map<int, int> cache;

int query(int i) {
    if (cache.count(i)) return cache[i];

    cout << "? " << i << endl;
    cout.flush();  // Important for interactive problems

    int val;
    cin >> val;
    cache[i] = val;
    return val;
}

int main() {
    int n;
    cin >> n;

    int l = -1, r = n+1N;
    while (l < r) {
        int mid = (l + r) / 2;

        int a = query(mid);
        int b = query(mid + 1);

        if (a < b) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    // l == r
    cout << "! " << l << endl;
    cout.flush();
}
