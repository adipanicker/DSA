#include <bits/stdc++.h>
using namespace std;

bool checkSubarray (int arr1[], int arr2[], int n, int m){
    if (n>m) return false;

    for (int i=0;i<n;i++){
        int match = 0;
        for (int j=i;j<m;j++){
            if (arr1[i] == arr2[j]){
                match++;
                break;
            }
            if (match == 0 ) return false;
        }
    }
            return true;
}

bool checkSubset (int arr1[], int arr2[], int n, int m){
    if (n>m) return false;

    unordered_map <int,bool> mp;

    for (int i=0;i<m;i++){
        mp[arr1[i]] = true;
    }
    for (int j=0;j<n;j++){
        if (mp.count(arr1[j]) == 0){
            return false;
        }
    }

    return true;
}


int main(){
    int arr1[] = {3,4,5,6};
    int arr2[] = {3,4,5,6,10,9,1};
     int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/ sizeof(arr2[0]);

    bool ans = checkSubarray(arr1,arr2,n,m);

    cout << "Answer is : " << ans;
}