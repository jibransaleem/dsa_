#include <bits/stdc++.h>
using namespace std;

// const int MOD = 1e9 + 7;
// int BitString(int n ){
//     long long ans = 1 ;
//     for(int i=1 ; i<=n ; i++){
//         ans = ((2%MOD)*(ans%MOD))%MOD; 
//     }
//     return ans ;
// }

void func(int n ){
    vector<int>array = {};
    for (int i = 1 ; i<= n ;i++){
            array.push_back(i);
    }
    vector<int> ans ;
    int start = 0 ;
    int end = 1;
    while (array.size()!=1)
    {
        if (end ==  array.size()-1){
            ans.push_back(array[end]);
            array.erase(array.begin()+end) ;
            end = start+1 ; 
        }
        else if(end > array.size()-1){
            ans.push_back(array[start]);
            array.erase(array.begin());
            end = start+1 ; 
        }
        else{
            ans.push_back(array[end]);
            array.erase(array.begin()+end);
            end = end+2 ; 
        }
    }
    for(auto i :ans){
        cout << i <<" " ; 
    }
    


}
int main() {
    func(9) ; 

    return 0 ; 
}
