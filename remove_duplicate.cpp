#include<bits/stdc++.h>
using namespace std;

int main(){
    //input 
    int n;
    cin >> n;

    vector<int> nums(n);

    //taking input
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    if ( n == 0){
        cout << 0;
        return 0;
    }

    //logic 
    int i = 0;
    for(int j = 1; j < n; j++){
        if ( nums[j] != nums[i]){
            i++;
            nums [i] = nums[j];
        }
    }

    // number of unique elements
    int k = i+1;
    cout << k;

    //output modified array
    for(int x =0; x<k; x++ ){
        cout << nums[x] << "";
    }

    return 0;
}