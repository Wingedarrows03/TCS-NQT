#include<bits/stdc++.h>
using namespace std;

int main(){
    //input 
    int n;
    cin >> n;

    vector<int> arr(n); // vector holding input

    // taking input
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // core logic 
    int small = INT_MAX , second_small = INT_MAX;
    int largest = INT_MIN, second_largest = INT_MIN;

    for(int i = 0; i<n; i++){

        //second smallest logic
        if( arr[i] < small){
            second_small = small;
            small = arr[i];
        }

        else if ( arr[i] < second_small && arr[i] != small ){

            second_small = arr[i];

        }

        //second largest logic
        if( arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }

        else if (arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
    }

    cout<< second_small << "" << second_largest;


}

