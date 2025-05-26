#include <bits/stdc++.h>
using namespace std;

bool checkPrime (int n){
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int PrimeSum (int n){
    int sum = 0;
    for (int i=1;i<=n;i++){
       bool prime = checkPrime(i);
        if (prime) {
            sum += i;
        }
    }
    return sum;
}

int main(){
    int n = 14;
   bool ans = checkPrime(n);
   int sum = PrimeSum(n);
    if (ans) {
        cout << "It is a prime num" << endl;
    }
    else {
        cout << "Not a prime num" << endl;
    }

    cout << "Sum of all prime numbers from 0-" <<n << " is: " << sum;
}