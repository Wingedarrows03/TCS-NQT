#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    //input 
    for( int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //logic 
    sort(arr.begin(),arr.end()); // sorting

    reverse(arr.begin() + n/2, arr.end()); //reversing the first half

    //output
    for(int i = 0; i < n;i++){
        cout << arr[i] << endl;
    }

    
}
