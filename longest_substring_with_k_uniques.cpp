#include <bits/stdc++.h>
using namespace std;

int main(){
    //input 
    int n;
    cin >> n;

    int k;
    cin >> k; // target size

    vector<int> arr(n); // vector to handel inputs

    // processing inputs 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // logic 
    int left = 0; //left pointer 
    int right = 0; // right pointer 
    int maxlen = -1; // maximum length (if no valid window is found -1 will be returned instead of -2178...)

    //edge case 
    if (k > n){
        cout << -1 << endl;
        return 0;
    }

    //unordered map 
    unordered_map<int,int> freq;

    for(right = 0; right < n; right++){
        freq[arr[right]]++; //expanding the window 

        // window > k
        while(freq.size() > k){
            freq[arr[left]] --; // removing the oldest element 
            if (freq[arr[left]] == 0){
                freq.erase(arr[left]); // removing empty keys 
            }
            left ++; // left pointer will move 
        }

        // window == k
        if(freq.size() == k){
            maxlen = max(maxlen,right - left +1);
        }
    }
    //output 
    cout << maxlen << endl;


}