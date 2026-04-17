#include <bits/stdc++.h>
using namespace std;

int main(){
    //input 
    string s;
    cin >> s;

    string p;
    cin >> p;

    int n1 = s.size();
    int n2 = p.size();

    //logic
    vector<int> result; // result holding vector

    //edge case 1 handeling
    if(n2 > n1) {
        return 0; // In main, we return 0
    }

    // freq map for n "master list"
    vector<int> target(26,0); // Fixed syntax
    for (char c : p){
        target[c - 'a']++; //ASCII value
    }

    // feq map for s "sliding window list"
    vector<int> window(26,0); // Fixed syntax
    int left = 0;

    // We need a loop for 'right' to move through s
    for(int right = 0; right < n1; right++) {
        
        // Add current character to window
        window[s[right] - 'a']++;

        //window size exceeds 
        if (right - left + 1 > n2){
            window[s[left] - 'a']--; // removing the oldest elements
            left++;
        }

        //window size meets p.size
        if (right - left + 1 == n2){
            if(window == target){
                result.push_back(left);
            }
        }
    }

    // Loop to print result
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}