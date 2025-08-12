#include <bits/stdc++.h>
using namespace std;
int main(){

    vector <int> array  = {1,1,0,1,1,1,1,0,1}  ;
    int l = 0 ; 
    int r = 0 ;
    int counter  = -1 ; 
    while (r<array.size())
    {
        cout << counter<< " " ; 
        if(array[r]!=1){
             
            if(((r+1)<array.size()) && array[r+1]!=1){
                    counter = max(r-l , counter) ; 
                    l = r+2  ; 
            }
            else{
                l+=1;
                counter = max(r-l+1 , counter);

            }
        }
        r++;        
    }
    cout<<counter; 
     

}