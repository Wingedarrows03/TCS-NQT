#include <bits/stdc++.h>
using namespace std;

int main(){
    // input
    int n ;
    cin >> n;

    int k = 2; // target 

    vector<int> arr(n);// vector to handel inputs
    // processing inputs
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //logic

    int left = 0; //left pointer
    int right = 0; //right pointer 
    int maxfruit = 0; // max fruits "we are using 0 and not INT_MIN as we negative values are not needed"

    //map will be used to keep track of tree freq and its type
    unordered_map<int,int> freq;

    for(right = 0; right < n; right++){
    freq[arr[right]]++; // window is expanding

    // window size hits the target 
    while(freq.size() > k){
        freq[arr[left]]--; // substracting the oldest number 
        if(freq[arr[left]] == 0){
            freq.erase(arr[left]); 
        }
        left ++; // left pointer will move
    }
    maxfruit = max(maxfruit, right - left + 1);
    }
    cout << maxfruit << endl;
}