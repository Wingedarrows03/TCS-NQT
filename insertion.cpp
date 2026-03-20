#include<bits/stdc++.h>
using namespace std;

int main(){
    //input
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    //logic
    int x;
    cin >> x;

    arr.insert(arr.begin(),x);

    //output
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}