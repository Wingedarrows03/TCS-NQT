#include<bits/stdc++.h>
using namespace std;

int main(){

    //input
    string str;
    cin >> str;

    int product = 1;

    //logic
    for(int i = 0; i < str.size(); i++){
        int digit = str[i] - '0';
        product *= digit;
    }

    cout << product;
    return 0;
}