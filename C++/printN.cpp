#include<bits/stdc++.h>
using namespace std;

void printI(int n){
    cout <<n;
}

void printN(int n){
   static int i =1;
    cout << i;
    i++;
    if (i<=n){
        printN(n);
    }
}

void printNos(int n, int i){
    if (i<=n)
    cout << i;
    else return;
    printNos(n,i+1);
}

int main(){
    int n;
    cin >> n;
   
    cout << "Numbers from 1-" << n << "are: ";
    printN(n);
    cout << endl;
    printNos(n,1);
}