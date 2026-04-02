#include <bits/stdc++.h>
using namespace std;

int main(){
    //input
    int n;
    int k;
    cin >> n;
    cin >> k; // target 

    //taking input
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }

    //logic

    if(k <= 1) return 0; //edge case handeling

    int left = 0; // left pointer 
    int right = 0; // right pointer 
    int count = 0; //counter
    int product = 1; // product 

    for(int right = 0; right < n; right ++){
        product *= nums[right]; // expanding the window while multiplying

        // if product > 100
        while(product >= k && left <= right){
            product /= nums[left]; // dividing the oldest number
            left ++; //left pointer will be moved
        }

        // counting the number of subarrays
        count += (right - left +1);
    }
    cout<< count <<endl;

}