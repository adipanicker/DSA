#include<bits/stdc++.h>
using namespace std;

bool canWePlace (vector<int> &arr, int mid, int cows){
    int cntCows = 1, last = arr[0];
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]-last>=mid){
            cntCows++;
            last = arr[i];
        }
        if(cntCows >=cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &arr, int cows){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int low = 1, high = arr[n-1]-arr[0];
    while (low<= high){
        int mid = (low+high)/2;
        if (canWePlace(arr,mid,cows)){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return high;
}

int main(){
    vector <int> arr = {0,3,4,7,10,9};
    int cows = 4; // no. cow is always greater than 1

    int ans = aggressiveCows(arr,cows); // return the MAX(minimum distance between cows) in a shed(arr);
    cout << ans;
}