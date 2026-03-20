#include<bits/stdc++.h>
using namespace std;

int main(){
    //input 
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i =0; i < n;i++){
        cin >> arr[i];
    }

    //logic
    vector<int> sorted = arr;
    sort(sorted.begin();sorted.end());

    unordered_map<int,int> rankmap;
    int rank = 1;

    for(int i = 0; i < n; i++){
    if(rankmap.find(sorted[i]) == rankmap.end()){
        rankmap[sorted[i]] == rank;
        rank++;

    }

    }
    for(int i = 0; i < n; i++){
        cout << rankmap[arr[i]] << " ";
    }
    return 0;
}