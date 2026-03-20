#include<bits/stdc++.h>
using namespace std;

int main(){
    //input
    int n ;
    cin >> n;
vector<int> arr(n);
for (int i = 0; i < n ; i++){
    cin >> arr[i];
}

//logic 
int left = 0;
int right = n-1;
int mid = 0; //scounting 

while(mid <= right){
    if (arr[mid]==0){
        swap (arr[left] , arr[mid]);
        left ++;
        mid ++;
    }

    else if( arr[mid] == 2){
        swap(arr[right], arr[mid]);
        right --;
    }

    else{
        mid ++;
    }

}
return 0;
}