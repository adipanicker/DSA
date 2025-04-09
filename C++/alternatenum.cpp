#include <bits/stdc++.h>
using namespace std;

vector<int> alternateNums (vector<int> &nums){
    int n = nums.size();
    vector <int> pos, neg;

    for (int i=0;i<n;i++){
        if (nums[i]<0){
            neg.push_back(nums[i]);
        }
        else {
            pos.push_back(nums[i]);
        }
    }

    if (pos.size()>neg.size()){
        for (int i=0;i<neg.size();i++){
            nums[i*2] = pos[i];
            nums[i*2 + 1] = neg[i];
        }
        int index = neg.size()*2;
        for (int i = neg.size();i<pos.size();i++){
            nums[index]= pos[i];
            index++;
        }
    }

    else {
        for (int i=0;i<pos.size();i++){
            nums[i*2] = neg[i];
            nums[i*2 + 1] = pos[i];
        }
        int index = pos.size()*2;
        for (int i = pos.size();i<neg.size();i++){
            nums[index]= neg[i];
            index++;
        }
    }
    return nums;
}

int main(){
    vector <int> nums = {3,1,-2,-5,2,-4,7,10,-8,34,65,75,-69};

    vector <int> ans = {alternateNums(nums)};
    for (int x:ans){
        cout << x << " " ;
    }
}