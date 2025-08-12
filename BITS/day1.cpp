#include <bits/stdc++.h>

using namespace std;


//

//bitset<N> variable(num);

//bitset<8> x(num);

//"Convert the decimal number num into its binary representation,
//and store it as a fixed-size 8-bit binary value in the variable x."

// BRUTE METHOD
string PrintBinary(int number) {
    int n = number ; 
    string num = "" ; 
    while (n >= 1 ){
        if (n==1){
            num.append("1")   ;
            reverse(num.begin() , num.end()) ;
            return num;

        }
        else if (n%2==0){
            num.append("0") ;
            n = n/2 ; 
        }
        else{
            num.append("1") ;
            n = n/2 ; 

        }
    }
    
}
void HaveBinary(int number) {
    for (int i =  8 ; i >= 0 ; i--){

        cout << ((number >> i) & 1) ; 
    }
}

void IsSetBit(int number , int  idx){
    if ((number &(1<<idx)) != 0 ){
        cout << "IT IS A SET BIT";
        return ; 
    }
    cout <<"It is not a set bit" ; 
    return ; 
}
void Setting_Set_Bit(int number , int idx) {
    if (number &(1<<idx) != 0 ){
        cout << "Already set" ; 
        return ; 
    }
    number = (number | (1<<idx));
    return ; 

}
void Unsetting_Set_Bit(int number , int idx){
// bits at index i with 1 and all 0 : 1<< idx
// by inverting this : index i with 0 and all 1 : ~(1<<idx)
// if and this with set bit : 1 and 0 = 0 , since all are 1 all bits will be preserved
// 1 and any_num = any num 
    int i = ~(1<<idx) ;
    number  = number & i ;
    

}
void toogle(int number , int idx){
    number = number ^ (1>>idx) ; 
}

void Number_of_set_Bits(int number) {
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((number >> i) & 1) {
            count += 1;
        }
    }

    // Built in way for it
    // int count = __builtin_popcount(number); // only for int
    // int countL = __builtint_popcountLL(number) // for Large number(long long)
    // cout << count;
}


int main(){
    int number =  8;
    Number_of_set_Bits(7) ; 
    return 0 ;
}