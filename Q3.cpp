#include<bits/stdc++.h>
include namespace.std;

int main(){
    //input 
    int n;
    cin >>n;

    string s;
    cin >>s;

    //logic 
    unordered_map<string ,int> m;
    m["mon"] = 6;
    m["tue"] = 5;
    m[" wed "] = 4;
    m[" thu "] = 3;
    m[" fri "] = 2;
    m[" sat "] = 1;
    m[" sun "] = 0;

    int ans = 0;

    if(n >= m[s] + 1){
        ans = 1 + (n - m[s]-1)/7;
    }

    cout << ans;
    return 0;
}