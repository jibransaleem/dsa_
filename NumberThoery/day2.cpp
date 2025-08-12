#include <bits/stdc++.h>
using namespace std;

void func(int n){
    vector<bool> isPrime(n+1 , true);
    vector<int> Hp(n+1 , 0); // Highest prime factor
    vector<int> Lp(n+1 , 0); // Lowest prime factor

    for(int i = 2 ; i <= n ; i++){
        if(isPrime[i]){
            Hp[i] = Lp[i] = i; // i is prime
            for(int j = 2*i ; j <= n ; j += i){
                isPrime[j] = false;
                Hp[j] = i;           // always update → gives highest
                if (Lp[j] == 0){     // only update once → gives lowest
                    Lp[j] = i;
                } 
            }
        }
    }

    cout << Hp[n]; // Output highest prime factor of n
}
void PrimeFactor(int n){
    vector<bool> isPrime(n+1 , true) ; 
    isPrime[0]=isPrime[1]=false;
    for (int i = 2; i<= n;i++){
        if(isPrime[i]){
            for (int j = 2*i ;j<=n ;j+=i){
                isPrime[j]= false ; 
            }
        }
    }
    for (int i=2; i*i<=n;i+=1){
        if (isPrime[i]){
            if(n%i==0){
                cout << i <<"  " ; 
            }
        }
    }
}


// or  : using Hp

void PF2(int n){
    vector<bool> isPrime(n+1 , true);
    vector<int> Hp(n+1 , 0); // Highest prime factor

    for(int i = 2 ; i <= n ; i++){
        if(isPrime[i]){
            Hp[i]  = i; // i is prime
            for(int j = 2*i ; j <= n ; j += i){    // nlogn
                isPrime[j] = false;
                Hp[j] = i;           // always update → gives highest
            }
        }
    } 
    while (n>1)
    {
        int Max = Hp[n] ; 
        while (n%Max==0)
        {
            n = n/ Max ; 
            cout << Max ;   // logn
        }
        
    }
    
}   

void BinaryExponentiation(int a , int b ){
    long long ans = 1LL;
    while(b>0){
        if(b%2==0){
            ans*=a ; 
        }
        ans*=ans; //ans^2
        b=b/2 ; 
    }
}

long long BE2(long long a, long long b) {
    if (b == 0) return 1;

    long long temp = BE2(a, b / 2);
    temp = temp * temp;

    if (b % 2 == 1) {
        temp *= a;
    }

    return temp;
}

int main(){
    PF2(10);
}

