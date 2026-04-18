#include <bits/stdc++.h>
using namespace std;

int main(){
    // input 
    string p;
    cin >> p;

    string s;
    cin >> s;

    int n1 = s.size();
    int n2 = p.size();

    //logic
    vector<int> result ; // result holding vector 
    
    // freq map for p (master list)
    vector<int> target(26,0);
    for(char c : p){
        target[c - 'a']++; // ASCII value 
    }

    //freq map for s (window list)
    vector<int> window(26,0);
    int right = 0; //right pointer 
    int left = 0; // left pointer 

    for(right = 0; right < n1; right++){

        window[s[right] - 'a']++; // expanding the window 

        // window exceeds the p size
        if( right - left + 1 > n2){
            window[s[left] - 'a']--; // removing the oldest elemests first
            left ++; // left pointer will be incremented
        }

        //window size meets p size
        if (right - left + 1 == n2){
            if(window == target) 
            {
                result.push_back(left); // push the answer in the result vector
            }
        }
    }
    // output
    for(int x: result){
        cout << x << " ";
    }
    cout << endl;
    return 0;
    
}