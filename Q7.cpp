#include <bits/stdc++.h>
using namespace std;
int main(){
    //input 
    string s;
    cin >> s;
    
    int l;
    cin >> l;

    int n = s.size();
    int maxA = 0;

    for(int i = 0; i < n; i += l){
        int count = 0;
        for(int j = i; j < j+l && j < n; j++){
            if (s[i] == "a"){
                count ++;
            }
        }
    }
    maxA = max(maxA,count);
    cout << maxA;
    return 0;
    


}