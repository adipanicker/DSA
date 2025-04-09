#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter Size of Array: ";
    int n;
    cin >> n;

    cout << "Enter the values in the Array: ";
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    //precompute

    int hash[13000] = {0};
    for (int i=0; i<n;i++){
        hash[arr[i]]+= 1;
    }


    cout << "Enter the number of values' count to be checked: ";
    int k;
    cin>> k;
    while (k--){
        int number;
        cin>> number;
        //fetch
        cout << hash[number] << endl;
    }
    
    
    return 0;
}