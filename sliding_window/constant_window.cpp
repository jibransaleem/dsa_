#include <bits/stdc++.h>
using namespace std ; 

// constant window : k is given : window size =  k  , example:sub array of sum  0 
// When to Use
// Window size is fixed (like 3, 5, k, etc.)

// Continuous subarray or substring problems

// You want to find:

// Maximum/minimum sum

// Count of something

// Average

// Specific conditions in a fixed-size window
int Max_Sum(vector<int> array, int k) {
    int sum = 0;

    // First window
    for (int i = 0; i < k; i++) {
        sum += array[i];
    }

    int maxSum = sum;  // track max separately
    int left = 0;
    int right = k;

    while (right < array.size()) {
        sum = sum - array[left] + array[right];  // slide window
        left++;
        right++;
        maxSum = max(maxSum, sum);  // update max
    }

    return maxSum;
}
// longest subarray with sum <= k
int Longest(vector<int>array , int k ){
    int sum = 0 ;
    int right = 0 ;
    int Max= 1  ; 
    int left  = 0 ;
    while(right<array.size()){
        sum+=array[right] ; 
        while (sum>k && right>=left)
        {
            sum-=array[left] ; 
            left++; 
        }
        Max = max(Max , right-left+1) ;         
        right++;
    }
    return Max ; 
}
void Longest2(vector<int>& array, int k) {
    int sum = 0, left = 0, right = 0;
    int maxLen = 0;
    int maxSum = 0;

    while (right < array.size()) {
        sum += array[right];

        while (sum > k && left <= right) {
            sum -= array[left];
            left++;
        }

        int windowLen = right - left + 1;
        if (sum <= k && windowLen > maxLen) {
            maxLen = windowLen;
            maxSum = sum;
        }

        right++;
    }

    cout << maxSum<<"  "<< maxLen  ; 
}

int main() {
    vector<int> array = {1,2,3,4,5};
    int k = 8;
    Longest2(array, k);  // Output: 12 (3+4+5)
    return 0;
}

