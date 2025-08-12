#include <bits/stdc++.h>
using namespace std;
void fast_io(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr) ; 
}

vector<bool> prime(int n){
    vector<bool> p(n+1 , true) ;
    p[0]=p[1]=false; 
    for(int i =2 ;i<=n ; i++){
        if (p[i]){
            for(int j =2*i ; j<=n ; j+=i){
                p[j] = false;
            }
        }
    }
    return p ; 
}
int solver(int n){
    vector<bool> Prime = prime(n) ; 
    int counter = 0 ; 
    int check ; 
    vector<int> a  = {}  ; 
    for(int i = 1 ; i<=n ; i++){
        check = 0 ;
        for(int j = 1 ; j<=n ;j++){
            
            if( (i!=j)&&  ((Prime[j]) && ((i% j)==0)) ){
                check+=1;
            }
        }
        if (check==2){
            counter+=1;
        }
       
    }
    
    return counter ;  

}

int main(){
    int n =100; 
    cin >> n ; 
    cout << solver(n)  <<"\n";
     
    return 0 ; 
}