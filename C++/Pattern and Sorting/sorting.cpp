#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int min = i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

void bubbleSort(int arr[], int n){
    for (int i=n-1;i>0;i--){
        int didSwap = 0;
        for (int j=0;j<i;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j+1]; 
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if (didSwap==0) break;
    }
}



void insertionSort(int arr[], int n){
    for (int i=0;i<n;i++){
        int j=i;
        while (j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main(){
    int arr[]= {2,4,14,4,5,23,6,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}