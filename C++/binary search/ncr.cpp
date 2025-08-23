#include <bits/stdc++.h>
using namespace std;

int NcR (int n, int r){
    int res = 1;
    for (int i=0;i<=r;i++){
        res = res * (n-i);
        res = res/(i+1);
    }
    return res;
}

int main(){
    int n,r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    
    int ans = NcR(n,r);
    cout << "The ans is : "<< ans;
}