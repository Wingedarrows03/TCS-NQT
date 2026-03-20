#include <bits/stdc++.h>
using namespace std;
int main (){
    //input 
    int n;
    cin >> n;

    vector<int> arr(n);

    //processing input 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //logic 
    int sum = 0;
    for(int i =0; i < n; i++){
        sum += arr[i];
    }

    double avg = (double)sum / n;

    //output
    cout << avg;

    
}