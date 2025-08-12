#include <bits/stdc++.h>
using namespace std;
using ll= long long;
const int mod = 1e9;

void fast_io(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
}

int func1(){
    int n = 5 ;
    
    int p[n+1]{};
    string s = "bb" ;
    map<char , int > m;
    int counter = 0 ;
    for(auto i : s){
        counter = max(counter,++m[i]) ;  // print all max freq ele
                                // eqvivalnt to : m[i]++ , max(counter , m[i]) 
    }
    for (auto c : m )
    {
        if (c.second  == counter){
            cout << c.first <<"\n";
        }
    }
    
    return 0 ;
}
int first_index(){
    vector<int> array  = {1,2,2,2,2,2,4,5,6,7,8,9,10};
    int t = 2;
    int index =-1;
    int r = array.size()-1;
    int l =  0 ; 
    while (r>=l)
    {
        int mid = l + ((r - l) >> 1);
        if(array[mid]==t){
            index =  mid ; 
            r = mid -1;
        }
        else if(array[mid]>t){
            r = mid -1 ; 

        }
        else{
            l =  mid +1 ; 
        }
    }
    cout << index << "  " <<array[index] <<"\n";
    return 0 ; 
}

int main(){
    first_index();
    return 0 ;
    
}
