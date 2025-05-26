#include <bits/stdc++.h>
using namespace std;

int secondLargest (vector <int> &arr){
    int largest = arr[0];
    int second = -1;
    int n = arr.size();
    for (int i=1;i<n;i++){
        if (arr[i] > largest){
            second = largest;
            largest = arr[i];
        } 
        else {
            if (arr[i]>second){
                second = arr[i];
            }
        }
    }
    return second;
}

int main (){
    vector<int> arr = {10,5,6,7,2,9};
    int ans = secondLargest(arr);
    cout << ans;
}