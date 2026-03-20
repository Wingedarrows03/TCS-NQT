#include<bits/stdc++.h>
using namespace std;

int main(){
    //input
    int n; 
    int d; // size of rotation
    cin >> n;
    cin >> d;

    vector<int> arr(n);

    //input in arrays
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //logic 

    d = d%n;
    int start; int end;

    //reversing first d elements
     start = 0;  end = d-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }

    //reversing other elements
     start = d; end = n-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }

    //reversing the whole array
    start = 0;  end = n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }

    //output
    for(int i =0; i < n; i++){
        cout << arr[i];
    }
    return 0; 


}