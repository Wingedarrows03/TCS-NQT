#include<bits/stdc++.h>
using namespace;

int main(){
    //input 
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)[
        cin >> arr[i];
    ]

    //logic
    unordered_map<int,int>freq;
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    //custom comparator
    sort(arr.begin(), arr.end() [&] (int a, int b)){
        if(freq[a] != freq[b]){
            return freq[a] > freq[b];
        }
    }

}