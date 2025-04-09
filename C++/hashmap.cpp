#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    //precompute
    map<int,int> mpp;
    for (int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    // for (auto x:mpp){
    //     cout << x.first << "->" << x.second << endl; 
    // }

    int q;
    cin >> q;
    int num;
    while(q--){
        cin >> num;
        cout << mpp[num] << endl;
    }
    return 0;
}