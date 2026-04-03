#include<bits/stdc++.h>
using namespace std;

int main(){
    //input
    int n;
    cin >> n;

    int k;// target 
    cin >> k;
    
    vector<int> arr(n);

    //processing input
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //logic
    if(k < 0) return 0; // edge case handeling 1

    int left = 0; // left pointer 
    int right = 0; //right pointer 
    int sum = 0; //sum
    int maxlen = 0; //max

    for(right = 0; right < n; right ++){
        sum += arr[right]; // expanding the window by adding element

        //length of the window == target
        if(right - left + 1 == k){
            maxlen = max(maxlen,sum); // maximum value
            sum -= arr[left]; // removing the oldest number 
            left ++; // left pointer will move 
        }
    }
    cout<< maxlen << endl;
}