#include<bits/stdc++.h>
using namespace std;

int main(){
    //input 
    int n;
    int k; //target
    cin >> n;
    cin >> k;
    vector <int> arr(n); // vector

    //input processing
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    //logic 

    if (k < 0) return 0; // edge case handeling 1

    int left = 0; //left pointer 
    int right = 0; //right pointer 
    int sum = 0; //sum 
    int minlen = INT_MAX; //minimum value

    for(right = 0; right < n; right++){
        sum += arr[right]; // window expansion by adding the value

        //if sum >= target 
        while(sum >= k){
            minlen = min(minlen, right - left + 1);
            sum -= arr[left]; // substracting the oldest number
            left ++; // left pointer will move 

        }

    }
    if (minlen == INT_MAX) return 0; //edge case 2
    return minlen;

}