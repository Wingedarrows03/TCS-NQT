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
    int i = 0;
    for(int j = 0; j<n;j++){
        if(arr[j] != 0){
            arr[i] = arr[j];
            i++;
        }
    }

    while(i < n){
        arr[i] = 0;
        i++;
    }

    //output 
    for(int i = 0; i<n ;i++){
        cout << arr[i] << " ";
    }

    return 0;

}