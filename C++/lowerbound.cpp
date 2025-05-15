#include <bits/stdc++.h>

using namespace std;

int lowerbound(int n,int target,vector<int> &arr){
    int low = 0, high = n-1, ans = n;

    while (low<=high){
        int mid = (low +high)/2;

        if (arr[mid] >= target){
            ans = mid;
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int upperbound(int n,int target,vector<int> &arr){
    int low = 0, high = n-1, ans = n;

    while (low<=high){
        int mid = (low +high)/2;

        if (arr[mid] > target){
            ans = mid;
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}



int main (){
    vector<int> arr {1,2,3,3,5,8,8,10,11};
    int n = arr.size();
    int target;
    cout << "Enter the target: ";
    cin >> target;

    int ans = lowerbound(n,target,arr);
    cout << ans << endl;

    int lb = lower_bound(arr.begin(),arr.end(),10)-arr.begin();

    cout << lb;
}