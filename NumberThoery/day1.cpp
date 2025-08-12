#include <bits/stdc++.h>
using namespace std ; 

string func1(int n ){
    for (int i =2; i*i<=n ; i++){
        if (n%i == 0){
            return "No";
        }
    }
    return "Yes";
}
string  func2(int n){
    vector<bool>Prime(n+1 , true) ;
    Prime[0]=false ;   
    for(int i  = 2 ; i<=n ; i++ ){
        if (Prime[i]){
            for(int j = 2*i ; j<=n ; j+=i){
                Prime[j]=false;
            }
        }
    }
    if (Prime[n]){
        return "yes";
    }
    return "no" ; 
    
}

int func3(string word){
    unordered_map<char, int> roman;
    // string word  = s ///////\;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int ans = 0;
    int i= word.size()-1;

    while (i >=0) {
        char first = word[i] ; 
        if ((i-1)>=0){
            char second = word[i-1]; 
            if (roman[first] > roman[second]){
                ans+=(-roman[second]+roman[first]) ; 
                i= i-2;

            }

        }
        else{
            ans+=roman[first] ; 
            i-- ; 
        }

    }
    return ans;
}

int main(){
    cout << func3("MCMXCIV"); 

    return 0 ; 
}
