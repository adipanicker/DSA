#include <bits/stdc++.h>
using namespace std;

int sumOfPrime(int n){
    int sum = 0;
    for (int i=1;i<=n;i++){
        int count = 0;
        for (int j=1;j<=i;j++){
            if (i%j == 0){
                count++;
            }
        }
        if (count == 2){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int n,j;
    cin >> n;
    int ans = sumOfPrime(n);
    cout << ans;
}