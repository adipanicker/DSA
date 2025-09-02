#include <bits/stdc++.h>
using namespace std;

void print1(int n){
   for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        cout << " * ";
    }
    cout << endl;
   }
}

void print2(int n){
    for (int i=0;i<n;i++){
        for (int j=1;j<=i+1;j++){
             cout << " * ";
        }
        cout << endl;
    }
}

int main(){
    int t,n;
    cout << "Enter number of test cases needed: " <<endl;
    cin >> t;
    for (int i=0;i<t;i++){
       
        cin>>n;
        print2(n);
    }
    
   
}