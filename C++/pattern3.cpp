#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for (int i=0;i<n;i++){
        for (int j=n-i;j>0;j--){
            cout << " * ";
        }
        cout << endl;
    }
}

void print2( int n){
    for (int i=0;i<n;i++){
        for (int j=1;j<=n-i;j++){
            cout << j;
        }
        cout << endl;
    }
}

void print3(int n){
    for (int i=0;i<n;i++){
        //space
        for (int j=0;j<n-i-1;j++){
            cout<< " ";
        }
        //star
        for (int k=1;k<=i*2+1;k++){
            cout <<"*";
        }
        //space
        for (int j=0;j<n-i-1;j++){
            cout<< " ";
        }
        cout<< endl;
    }
}

void print4(int n){
    for(int i=0;i<=n;i++){
        //spaces
        for (int j=0;j<i;j++){
            cout<< " ";
        }
        //stars
        for (int j=0;j<n*2-(2*i+1);j++){
            cout << "*";
        }
        //spaces
        for (int j=0;j<i;j++)
        {
            cout<< " ";
        }
        cout << endl;
    }
}

void print9(int n){
   print3(n);
   print4(n);
} 

void print10(int n){
  
 for (int i=1;i<=2*n-1;i++){
    int stars=i;
    if (i>n)
    stars = 2*n-i;
    for (int j =1;j<=stars;j++){
        cout << "*";
    }
    cout<< endl;
 }
//  for(int i=1;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<< "*";
//     }
//     cout << endl;
//  }
}

void print11 (int n){
    int start =1;
    for (int i=0;i<n;i++){
        if (i%2==0) start=1;
        else start=0;
        for (int j=0;j<=i;j++){
            cout << start ;
            start=1-start;
        }
        cout<< endl;
    }
}

void print12 (int n) {
    int space = 2*(n-1);
    for (int i=1;i<=n;i++){
        //numbers
        for (int j=1;j<=i;j++){
            cout << j; 
        }
        //spaces
        for (int j=0;j<space;j++){
            cout<<" ";
        }
        //numbers
        for (int j=i;j>=1;j--){
            cout << j; 
        }
        cout << endl;
        space -= 2;
    }
}

void print13(int n) {
    int num = 1;
    for (int i=0;i<n;i++){   
        for (int j=0;j<=i;j++){
            cout << num << " ";
            num++;
        }
        cout<< endl;
    }
}

void print14(int n){
    for (int i=0;i<n;i++){
        for (char ch='A'; ch <= 'A'+i;ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print15(int n){
    for (int i=0;i<n;i++){
        for (char ch='A';ch<= 'A'+(n-i-1);ch++){
            cout << ch << " ";
        }
        cout<< endl;
    }
}

void print16(int n){
    char ch = 'A';
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout << ch;
        }
        cout << endl;
        ch++;
    }
}

void print17(int n){
    for (int i=0;i<n;i++){
        //spaces
        for (int j=1;j<=n-i-1;j++){
            cout << " ";
        }
        //alphabets
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for (int j=1;j<=2*i+1;j++ ){
            cout << ch;
            if(j>breakpoint)
            ch--;
            else {
            ch++;
            }

        }
        //spaces
        for (int j=1;j<=n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}

void print18(int n){
    for(int i=0;i<n;i++){
         for (char ch='E'-i;ch <= 'E';ch++){
            cout << ch << " ";
         }
         cout << endl;
    }
}

void print19(int n){
    for (int i=0;i<n;i++){
        //stars
        for (int j=0;j<n-i;j++){
            cout << "*";
        }
        //spaces
        int space= 2*i;
        for (int j=0;j<space;j++){
            cout << " ";
        }
        //stars
        for (int j=0;j<n-i;j++){
            cout << "*";
        }
       cout << endl;
    }
    for (int i=1;i<=n;i++){
        //stars
        for (int j=0;j<i;j++){
            cout << "*";
        }
        //spaces
        int space = 2*n-(2*i);
        for (int j=0;j<space;j++)
        cout << " ";
        //stars
        for (int j=0;j<i;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void print20(int n){
    int spaces = 2*n -2;
    for (int i=1;i<=2*n-1;i++){
        int stars=i;
        if (i>n) 
        i++;
    }
}

void print21(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==0 || j==0 || i==n-1 || j==n-1){
                cout << "*";
            }
            else cout<< " ";
        }
        cout << endl;
    }
}

void print22(int n) {
     
}

int main(){
    int t,n;
    cout << "Enter number of test cases: "<<endl;
    cin >> t;

    for (int i=0;i<t;i++){
        cout<<"input: ";
        cin >> n;
        print21(n);
        cout<< endl;
    }

}