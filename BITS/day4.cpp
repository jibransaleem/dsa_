#include <bits/stdc++.h>
using namespace std;
int func(long long n ){
    long long counter = 0;
    for (long long i = 1; i <= n; i++) {
        long long x = i;  // don't modify i
        while (x != 0) {
            long long rsbm = x & -x;  // rightmost set bit
            x -= rsbm;          // remove it
            counter++;
        }
    }
    return counter ; 

}
int main() {
    long long n ; 
    cin >> n ;
    cout << func(n) << endl;
    return 0;
}
