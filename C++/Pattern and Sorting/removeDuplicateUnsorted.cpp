#include <bits/stdc++.h>
using namespace std;

// question: remove the duplicates in the unsorted array and return an array in the same order w/o duplicates

//my approach: basic: create a new arr which will store bool for each value of input array then initialize it first with true
// then if it is repeated then false and then create a new arr and put all true values in them

// optimized approach: create a map then check the occurence of each. if the value is more than 1 then dont add it on the answer arr

void removeDuplicates(int arr[], int n){
    int mark[n];
    for (int i=0;i<n;i++){
        mark[i] = 1;
    }
    for (int i=0;i<n;i++){
        if (mark[i]==1){
            for (int j=i+1;j<n;j++){
                if (arr[i]==arr[j]){
                    mark[j]=0;
                }
            }
        }
    }
    for (int i=0;i<n;i++){
        if (mark[i]==1){
            cout << arr[i] << " ";
        }
    }
}

void removeDuplicates2 (int arr[], int n){
    map <int,int> mpp;

    for (int i=0;i<n;i++){
        if (mpp.find(arr[i]) == mpp.end()){
            cout << arr[i] << " ";
            mpp[arr[i]]++;
        }
    }
}

int main (){
    int arr[] = {4,1,3,1,6,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    removeDuplicates(arr,n);
}