#include <bits/stdc++.h>
using namespace std;


void EvenOdd(int number ){
    if (number & 1){
        cout << "odd";
        return ; 
    }
    cout << "even";
    return ;
}
void Mult_2(int number){
    cout << (number<<1) ; 
}

void Div_2(int number){
    cout <<(number>>1);

}
void Ascii(){
        for (char c = 'A' ; c<='E' ; c++){
                cout << int(c) ;
    }
}
void Ascii_bin_A(){
        for (char c = 'A' ; c<='Z' ; c++){
                int val = c ;
                bitset<8> b(val);
                cout << c << ":" << b;
                cout << endl;
        }
 }
 void Ascii_bin_a(){
        for (char c = 'a' ; c<='z' ; c++){
                int val = c ;
                bitset<8> b(val);
                cout << c << ":" << b;
                cout << endl;
        }
 }
void Caps_to_Small(char val){
    // chang 5 bit from 0 to 1
    int value = val ; 
    value = value | (1<<5);
    cout << char(value) ; 

}
void Interchange_caps__small(char val){
    // if 0 => 1 : cap - small
    // if 1 => 0 : small - cap
    // will use xor
    int value = val ;
    value = val^(1<<5);
    cout << char(value) ;
}

void Clear_From_lsb(int number , int idx){
// 1111001111
// 0000010000
//         -1 
// not( 0000001111)
// 11111100000

    int mask = ~((1 << (idx + 1)) - 1);  
    cout << (number & mask); 
}
void Clear_From_Msb(int number , int idx){
// 1111001111
// 0000010000
//         -1 
// 0000001111)
    int mask = ((1 << (idx+1))-1) ; 
    cout << (number & mask);
}
void Is_Power_of_2(int number){
    //printing binary of 2s power
    // int i = 0 ;
    // int val = 1;
    // while(val<300){
    //     val = pow(2 , i);
    //     cout << i << " :"<<bitset<         12>(val); 
    //     cout<< endl;
    //     i+=1;
    // }
    int count  = 0 ;
    for (int i = 31 ; i>=0 ; i--){
        if ((number>>i)&1){
            count+=1 ;
        }
    }
    if (count ==1){
        cout << "YES";
    }
    else{
        cout <<"NO" ; 
    }
}
int main(){
    Is_Power_of_2(1);

}