#include<bits/stdc++.h>
using namespace std;

int main(){
    //input 
    int n;
    cin >> n;

    vector<int> nums(n);

    //taking input
    for(int i =0; i < n;i++){
        cin >> nums[i];
    }

    //logic
    unordered_map<int,bool> seen; //map
    vector<int> result; //new result array

    for(int i =0; i<n; i++){
        if(!seen[nums[i]]){
            result.push_back(nums[i]);
            seen[nums[i]] = true;
        }
    }

    //output
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;

}