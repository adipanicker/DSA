// Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that
//every character in t (including duplicates) is included in the window.
//If there is no such substring, return the empty string "".

// Example 1:

// Input: s = "ADOBECODEBANC", t = "ABC"
// Output: "BANC"
// Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.



#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string t) {
        if (t.size()> s.size()) return "";

        unordered_map <char,int> need,window;
        int right = 0, left = 0;
        int start = 0, minLen = INT_MAX;
        int have = 0;

        for (char c:t){
            need[c]++;  // adding the needed elements int string 't' to need map;
        }
        int needCount = need.size(); // how many chars needed

        while(right<s.size()){
            char c = s[right]; //considering the [right] element of the window for comparisons
            window[c]++; //adding the right ch='c' to window;

            if(need.count(c)&& need[c]==window[c]){ //if 'c' is the ch we care about && we have all the needed ch in window have++
                have++;
            }


            //shrinking conditions for the window now

            while(have==needCount){ //we have all the elements needed in window so now trying to check the smallest substring(window) which is possible
                if(right-left+1 < minLen){
                    minLen = right-left+1;
                    start = left;
                }

                char d = s[left]; // shrinking the window from left
                window[d]--;

                if(need.count(d) && need[d]>window[d]){ //checking if removing left elemnt break the have Count
                    have--;
                }
                left++; // incrementing left inside the shrinking loop only when (have==needcount)
            }
            right++; // increasing right to check next char in 's'
        }
        return minLen == INT_MAX ? "" : s.substr(start,minLen);
    }


int main(){
    string s = "ADOBECODEBANC";
    string t = "ABC";
    string ans = minWindow(s,t);
    cout << ans;
}