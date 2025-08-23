#include <bits/stdc++.h>
using namespace std;

int checkSqrt(int n){
    for (int i=1;i<=n;i++){
        int sqr = i*i;
        if (sqr > n){
            return i-1;
        }
    }
    return 1;
}

int sqrt(int n){
    int low = 1, high = n;
    while (low <high){
        int mid = (low+high)/2;
       
        if (mid*mid > n){
            high = mid-1;
        }
        else if (mid*mid == n){
            return mid;
        }
        else {
            low = mid +1;
        }
    }
   
}


int main(){
    int n = 64;
    int sqroot = sqrt(n);
    cout << "Square root of " << n << " is " << sqroot;
}