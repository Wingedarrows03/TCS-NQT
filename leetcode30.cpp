#include <bits/stdc++.h>
using namespace std;

int main(){
    //input 
    string s;
    cin >> s; 

    int wordcount;
    cin >> wordcount;

    vector<string> words(wordcount);
    for(int i = 0; i < wordcount; i++){
        cin >> words[i]; // Corrected: storing in the words vector
    }

    //logic 

    vector<int> result; // result handeling vector (changed to int)
    
    //edge case - 1
    if(s.size() == 0 || words.size() == 0){
        return 0;
    }

    //general decleration 
    int n = s.size();
    int wordlen = words[0].size(); // length of each word 
    int k = wordlen * wordcount; // window length 

    // Map 1 (target) operating in words vector , keeps track of target words
    unordered_map<string,int> target;
    for(int i = 0; i < wordcount; i++){
        string w = words[i];
        target[w] ++; // map expanding
    }

    // pointer decleration operating in string s
    for(int pointers = 0; pointers < wordlen; pointers ++){
        int left = pointers; // left pointer
        int right = pointers; //right pointer '
        int cnt = 0; // keeps count of valid words (unified variable name)

        // Map 2 (seen) operating in string s , keeps track of current substring
        unordered_map<string,int> seen;

        // primary solutiomn engine
        while(right + wordlen <= n){ // Fixed to <= to ensure the last word is processed
            string word = s.substr(right, wordlen); // scissoring the chunk 
            right += wordlen ; // moving right pointer

            //if the correct word is hit 
            if(target.count(word)){
                seen[word]++; // the word will be added in the seen map
                cnt ++; // counter value will be increased

                //if the frequency is exceeded 
                while(seen[word] > target[word]){
                    string leftword = s.substr(left, wordlen); // scissoring the chunk 
                    seen[leftword] --; // the word will be removed from seen map
                    cnt --; // counter will be reduced 
                    left += wordlen; // left pointer will be expanded
                }

                // window matches the correct size
                if (cnt == wordcount){ // Fixed: comparing to wordcount
                    result.push_back(left); // left push back is done to avoid duplicate inputs
                }
            }

            // Hard reset 
            else {
                seen.clear(); // seen map will be cleaned
                cnt = 0; // counter back to 0
                left = right;
            }
        }
    }

    // print the answer (result vector needs a loop)
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << (i == result.size() - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}