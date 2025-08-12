#include<bits/stdc++.h>
using namespace std;

// void func1(){
//     string no1 = "3";
//     string no2 = "2" ; 
//     int a  = 0  ; 
//     int b  = 0  ; 
//     // cout << no2[0] - 48 ;  //returns ascii values
//     if (no1.size()==1){
//         a = no1[0] -  48 ; 
//     }
//     else{   
//         for(int i = 0 ;i <no1.size(); i ++){
//             a = a*10 + ((no1[i]-48));
//          }   

//     }
    
//     if (no2.size()==1){
//         b = no2[0] -  48 ; 
//     }
//     else{   
//         for(int i = 0 ;i <no2.size(); i ++){
//             b = b*10 + ((no2[i]-48));
//          }   

//     }
//     a =  a*b ; 
//     string ans =  "" ; 
//     while (a>0)
//     {
//         char ch = (a%10)+48 ;
//         ans = ans+ch ; 
//         a = a/10 ;

//     }
//    reverse(ans.begin() , ans.end()) ;

//     cout << ans; 
    
    
// }

int main(){
      unordered_map <int , int> dict ;
      vector<int> nums= {1,0,1,1 };
      int k = 1 ;  
        for(auto i:nums){
            dict[i]++; 
        }
        int num = -1;

        for(auto i : dict){
            if (i.second>1){
                num =  i.first ; 
                break ; 
            }
        }
        int i = -1;
        int  j = -1 ;
        for(int a = 0 ;a<nums.size();a++){
            if (nums[a] == num){
                if(i==-1){
                     i = a ; 
                }
                else{
                    j = a;
                }
            }
            
        } 
    int diff = abs(j-i) ; 
    cout << diff< k ;  
    return   0 ; 

}