#include <bits/stdc++.h>
using namespace std;


int partition (vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i=low;
    int j=high;
    
    while (i<j){
        while(arr[i] <= pivot && i<=high -1){
            i++;
        }
        while(arr[j] > pivot && j>= low +1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs (vector<int> &arr, int low, int high){
    if (low < high){
        int pIndex = partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr, pIndex+1, high);
    }
}


int main(){
        vector<int> arr = {4,6,2,5,7,1,9,3};
        qs(arr,0,arr.size()-1);
        for (int x:arr){
            cout << x << " "; 
        }
}