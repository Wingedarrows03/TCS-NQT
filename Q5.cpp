#include<bits/stdc++.h>
using namespace std;

int main(){
    //input
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    //logic 
    int max = INT_MIN;
    int count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            count ++;
            max = arr[i];
        }
        
        
    }
    cout << count;
    return 0;
}