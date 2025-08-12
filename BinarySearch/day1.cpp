#include <bits/stdc++.h>
using namespace std;
void fast_io(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);}

int func(){
    vector<int> array= {1,2,3,4,5,6,7,8};
    int  high = array.size()-1;
    int target  = 4 ;
    int low = 0 ;
    int ans =-1;
    int index  = -1;
    while (high>=low)
    {
        int mid = (high+low)>>1;
        if (array[mid] ==target){
            ans =  mid;
            low = mid+1;
        }
        else if (array[mid]>target){
            high = mid -1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
    
}
int main(){
    cout << func();
    return 0 ;
}