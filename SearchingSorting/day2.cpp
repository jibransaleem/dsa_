#include <bits/stdc++.h>
using namespace std;
int  main(){
         vector<pair<int, int>> intervals = {
        {1, 5},
        {2, 6},
        {4, 8}
    };
    vector<pair<int ,int>> events;
    for (auto it : intervals)
    {
        events.push_back({it.first ,  +1});
        events.push_back({it.second+1 ,  -1});

    }
    // sorting
    sort(events.begin(),events.end(),[](pair<int,int>a ,pair<int ,int>b  ){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first <b.first ;
    } );

    // sweeping thorugh element
    int active = 0 ;
    int max_active = 0 ;
    for(auto it :events){
            active+=it.second;
            max_active = max(active , max_active);
    }
    cout << max_active;
    
    
    
}