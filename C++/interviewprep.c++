#include <bits/stdc++.h>
using namespace std;

vector <int> rotateArray (int arr[], int k, int n){
    vector <int> ans(n);

    if (k>n){
        k= k%n;
    }

    for (int i=0;i<n;i++){
        ans[i] = arr[n-k+i];
    }
    int index = 0;
    for (int i=k;i< n;i++){
        ans[i] = arr[index++];
    }

    return ans;

}

int largest (int arr[], int n){
    int max=0;
    for (int i=0;i<n;i++){
        if (arr[i]> max){
            max = arr[i];
        }
    }
    return max;

    sort(arr,arr+n);

}
int main(){
    int n;
    cout << "Enter number of elements in array";
    cin >> n;

    int arr[n];
    cout << "Enter the values of elements in the array";
    for (int i =0; i<n;i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter the number of time to rotate the array";
    cin >> k;

    vector<int> ans = rotateArray(arr, k, n);

    cout << "Rotated array is ";
    for (int i =0; i<n;i++){
        cout << ans[i] << " ";
    }
}

// {10,43,2,56,70} k =3
// {2,56,70,10,43}