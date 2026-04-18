#include <bits/stdc++.h>
using namespace std;

int main(){
    //input
    string s1;
    cin >> s1;

    string s2;
    cin >> s2;

    int n1 = s1.size();
    int n2 = s2.size();

    //logic 

    //edge case handelling
    if(n1 > n2) {
        cout << "False" << " ";
        return 0;
    }

    //freq map for s1 "master list"
    vector<int> target(26,0);
    for(char c : s1){
        target[c - 'a']++; // ASCII value
    }

    //freq map for s2 "window list"
    vector<int> window(26,0);
    int left = 0; // left pointer 
    int right = 0; // right pointer

    for(right = 0; right < n2; right++){

        window[s2[right] - 'a']++; // expanding right pointer

        // window exceeds the target
        if( right - left + 1 > n1){
            window[s2[left] - 'a']--; // removing the oldest elements
            left ++; // left pointer increment
        }

        //window meets the target
        if(right - left + 1 == n1){
            if(window == target){
                cout << "True" << endl;
                return 0;
            }
        }
    }
    cout << "False"<< endl;
    return 0;
}