#include <iostream>
#include <vector>
using namespace std;

void func(int n) {
    long long total = 1LL * n * (n + 1) / 2;

    if (total % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    vector<int> set1, set2;
    long long sum1 = 0, sum2 = 0;

    for (int i = n; i >= 1; i--) {
        if (sum1 < sum2) {
            set1.push_back(i);
            sum1 += i;
        } else {
            set2.push_back(i);
            sum2 += i;
        }
    }

    cout << "YES\n";
    cout << set1.size() << "\n";
    for (int x : set1) cout << x << " ";
    cout << "\n" << set2.size() << "\n";
    for (int x : set2) cout << x << " ";
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    func(n);
    return 0;
}
