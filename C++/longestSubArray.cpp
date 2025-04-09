#include <bits/stdc++.h>
using namespace std;

int longestSubArray(int arr[], int k, int n){
    int maxLength = 0;

    for (int i=0;i<n;i++){
        int sum =0;
        for (int j=i;j<n;j++){
            sum += arr[j];
            if (sum == k){
                maxLength = max(maxLength, j-i+1);
            }
        }
    }
    return maxLength;
}

int optimalSol (int arr[], int k , int n){
    int prefixSum = 0, maxLength = 0;
    unordered_map <int, int> prefixMap;
    for (int i=0;i<n;i++){
        prefixSum += arr[i];

        if (prefixSum == k){
            maxLength = i+1;
        }

        if (prefixMap.find(prefixSum-k) != prefixMap.end()){
            int prevIndex = prefixMap[prefixSum-k];
            maxLength = max(prevIndex, maxLength);
        }

        if (prefixMap.find(prefixSum) == prefixMap.end()){
            prefixMap[prefixSum] = i;
        }
    }
    return maxLength;
}


int main(){
    int arr[] = {3, 2, -2, 2, 5, 1, 1};
    int k,n;
    k=5;
    n = sizeof(arr)/sizeof(arr[0]);
   int ans = optimalSol(arr,k,n);
   cout << ans;
}