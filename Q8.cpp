#include<bits/stdc++.h>
using namespace std;

int main(){
    //input 
    int n;
    cin >> n;

    long long fact = 1;
    for(int i = 1; i <= n-1; i++){
        fact *= i;
    }
    cout << 2 * fact;

    return 0;
}