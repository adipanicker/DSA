#include <bits/stdc++.h>
using namespace std;

void print1(int n){
 for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        cout << j ;
    }
    cout << endl;
 }
}

void print2(int n) {
for (int i=1;i<=n;i++){
    for (int j=0;j<i;j++){
        cout << i;
    }
    cout << endl;
}
}

int main(){
    int t,n;
    cout << "Enter number of test cases: "<<endl;
    cin >> t;

    for (int i=0;i<t;i++){
        cout<<"input: ";
        cin >> n;
        print2(n);
        cout<< endl;
    }

}