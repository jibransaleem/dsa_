#include <bits/stdc++.h>
using namespace std;
void func1(){
// arr = [12, -1, -7, 8, 15, 30, 16, 28]
// k = 3
// Output:
// [-1, -1, -7, 0, 0, 0]
    vector<int> array   = {12,-1,-7,8,15,30,16,28};
    int k=3 ; 
    
    vector<int> ans ={}; 
    //brute  :
    // for(int i =  0 ;i<=array.size()-k ;i++ ){
    //     bool flag = false ; 
    //     for (int j =0 ; j<k ; j++){
    //             int index  = i+j  ; 
    //         if(array[index]<0){
    //             flag = true ; 
    //             ans.push_back(array[index])  ; 
    //             break; 

    //         }
            
            
    //     }
    //     if( flag == false){
    //         ans.push_back(0) ; 
    //     }
    // }
    // for(auto i : ans){
    //     cout <<"  "<< i << endl ; 
    // }
    queue<int> q; 
    for(int i = 0;i<k ;i++){
        if (array[i]<0){
            q.push(array[i]);
        }
    }
    if(q.empty()){
        ans.push_back(0) ; 
    }
    else{
        ans.push_back(q.front()); 
       }
    int left  = 0;
    int right = k ; 
    while (right<array.size())
    {
        if(array[left]<0){
            q.pop() ; 

        }
        if(array[right]<0){
            q.push(array[right]) ; 
        }
        if(q.empty()){
            ans.push_back(0) ; 
        }
        else{
            ans.push_back(q.front());
        }
        left++;
        right++ ; 
        
    }
    for(auto i : ans){
        cout << i<<  endl ; 
    }    

}
void func2(){
//     Count Windows with At Least One Negative Number
// Given an array and a number k, return how many windows of size k contain at least one negative
// number.
// Input:
// arr = [1, -2, 3, -4, 5, 6]
// k = 3
// Output:
// 4
queue<int> q;
int  k = 3; 
vector<int>array = {1, -2, 3, -4, 5, 6} ; 
vector<int> ans = {} ; 
for(int i = 0 ;i<array.size()-k ;i++){
    if(array[i]<0){
        q.push(array[i]) ; 
    }
}
if(!q.empty()){
    ans.push_back(q.front()) ; 
}
int right = k ; 
int left  = 0  ; 
while(right<array.size()){
    if(array[left]<0){
        q.pop() ;
    }
    if(array[right]<0){
        q.push(array[left]) ; 
    }
    if(!q.empty()){
        ans.push_back(q.front());
    }
    left++;
    right++;
}
cout << ans.size();



}
void func3(){
    
    int k = 2;
    int target = 5;
    vector<int> array = {1, 4, 5, 0, 5, 0, 5};

    int right = k;
    int left = 0;
    int sum = 0;
    int ans = 0;

    for (int i = 0; i < k; i++) {
        sum ^= array[i];
    }

    if (sum == target) {
        ans++;
    }

    while (right < array.size()) {
        sum ^= array[left];   // remove leftmost element
        sum ^= array[right];  // add new element
        left++;
        right++;

        if (sum == target) {
            ans++;
        }
    }

    cout << ans << endl;
}
int main(){
    func3();
    return 0 ;
}