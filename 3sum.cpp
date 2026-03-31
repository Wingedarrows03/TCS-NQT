#include<bits/stdc++.h>
using namespace std;

int main(){
    //input 
    int n;
    cin >> n;

    vector<int> arr(n);

    //processing input 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //logic 
    vector<vector<int>>result;
    sort(arr.begin(),arr.end()); //sorting to handel duplicates in a better way
    int i = 0; //anchor pointer

    while(i < n-2){
        if(i > 0 && arr[i] == arr[i-1]){
            //skip the duplicate for i
            i++;
            continue;
        }

        int left = i+1; //left pointer 
        int right = n-1; //right pointer 

        while(left < right){
            int sum = arr[i]+arr[left]+arr[right]; // sum
            
            //sum < target 
            if(sum < 0){
                left ++;
            }

            //sum > target
            else if(sum > 0){
                right --;
            }

            //sum = target
            else{
                result.push_back({arr[i],arr[left],arr[right]});

                //handeling duplicates inside left & right pointers
                //for left pointer 
                while(left < right && arr[left] == arr[left+1]){
                    left ++;
                    continue;
                }

                //for right pointer 
                while(left < right && arr[right] == arr[right-1]){
                    right --;
                    continue;
                }

                //keep the pointers moving
                left++;
                right --;
            }
            
            

        }
        //keep the anchor pointer moving 
        i ++;
    }

    //output processing 
    for(int j = 0; j < result.size(); j++){
        cout << "[" << result[j][0] << "," << result[j][1]<< "," << result[j][2] <<"]\n";
    }
    return 0;

}