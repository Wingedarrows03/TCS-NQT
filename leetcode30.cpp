#include <bits/stdc++.h>
using namespace std; // corrected spelling of namespace

int main() {
    //input 
    string s; // input string
    cin >> s;

    int wordcount;
    cin >> wordcount; // word count for words vector 

    vector<string> words(wordcount); // vector holding target words
    for(int i = 0; i < wordcount; i++) {
        cin >> words[i];
    }

    //logic 
    vector<int> result; // changed to vector<int> because we store indices (numbers)

    //general declaration
    int n = s.size();
    int wordlen = words[0].size(); // length of each word 
    int k = wordlen * wordcount; // window of the problem 

    // edge case - 1
    if (s.size() == 0 || words.size() == 0) {
        cout << 0;
        return 0; // stop here if empty
    }

    // Map - 1 ( maping the targets) operating in words vector
    unordered_map<string, int> target; 
    for(int i = 0; i < wordcount; i++) {
        string w = words[i];
        target[w]++; // expanding the map count
    }

    // pointer decleration operating in string s 
    for(int pointer = 0; pointer < wordlen; pointer++) {
        int left = pointer; // left pointer (added semicolon)
        int right = pointer; // right pointer (added semicolon)
        int cnt = 0; // counts valid words (unified name to 'cnt')

        // Map - 2 (keep track of words in s) operating in string s 
        unordered_map<string, int> seen;

        while(right + wordlen <= n) { // changed < to <= to catch the last word
            string word = s.substr(right, wordlen); // cutting the string in chunks
            right += wordlen; // expanding the search 

            // if the word hits the target (checkpost)
            if (target.count(word)) { // checking the chunk against the target map 
                seen[word]++; // adding it to seen map 
                cnt++; // increasing the count of valid words

                // if the frequency limits exceeds
                while(seen[word] > target[word]) {
                    string leftword = s.substr(left, wordlen); // finding the oldest word
                    seen[leftword]--; // removing it from seen map 
                    cnt--; // count for valid word is reduced 
                    left += wordlen; // shrinking from the left in chunks
                }

                // window matches the target size 
                if (cnt == wordcount) {
                    result.push_back(left); // pushing from left as its free from repetation
                }
            }
            else {
                // reset case: hit a word not in target
                seen.clear(); // clearing the current window map
                cnt = 0; // resetting the valid word count
                left = right; // jumping left pointer to the new start
            }
        } // end of while loop
    } // end of pointer for loop

    // Output the results
    for(int x : result) {
        cout << x << " "<< endl;
    }

    return 0;
}