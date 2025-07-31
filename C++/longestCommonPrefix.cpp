#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix (vector<string> &strs){
    int n = strs.size();
    if (strs.empty()) return "";

    for (int i=0;i<strs[0].size();i++){
        char ch = strs[0][i]; //[str1,2,3][char 1,2,3]

        for (int j=1;j<n;j++){
            if (i>=strs[j].size() || strs[j][i] != ch){
                return strs[0].substr(0,i);
            }
        }
    }
    return strs[0];
}

int main(){
    vector <string> strs = {"flower","flow","flight"};
   string ans = longestCommonPrefix(strs);
   cout << ans;
}