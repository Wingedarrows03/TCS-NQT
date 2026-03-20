#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int,int> freq;

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    for(auto x : freq){
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}