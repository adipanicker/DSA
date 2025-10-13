#include <bits/stdc++.h>
using namespace std;

void leftShift (int arr[], int n){
    int temp = arr[0];
    for (int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

void rightShift ( int arr[], int n){
    int temp = arr[n-1];
    for (int i=n-1;i>=0;i--){
        arr[i]= arr[i-1];
    }
    arr[0]= temp;
}

void nleftShift (int arr[], int n, int k){
    int d = k%n;
  while (d>0){
    int temp;
    temp = arr[0];
    for (int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1]= temp;
    d--;
  }
}

int main(){
    int arr[]={3,5,2,6,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout << "Enter Number of time array to be rotated plzz: ";
    cin >> k;
    nleftShift(arr,n, k);
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}