#include<bits/stdc++.h>
using namespace std;

int main(){
    //input 
    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //logic
    unordered_map<int,int> seen;

    for(int i =0; i < n;i++){
        seen[arr[i]]++;
    }

    for(auto it: seen){
        if(it.second == 1){
            cout << arr[i] << " ";
        }
    }
    return 0;
}
