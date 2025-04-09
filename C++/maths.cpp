#include <bits/stdc++.h>
using namespace std;

void ExtractAllNums(int n){
    int lastDigit;
    while (n>0){
        // n%10 = lastDigit;
        lastDigit = n%10;
        cout << lastDigit << endl;
        n=n/10;
    }
}

void numOfDigits (int n){
    int lastDigit, count=0;
    while (n>0){
       // lastDigit= n%10; this is just for extracting num (not req)
        count++;
        n=n/10;
    }
    cout<< count;
}
void numOfDigitsAlt(int n){
    int count = (int)(log10(n))+1;
    cout << count;
}

void ReverseNum (int n){
     int revNum=0,ld;

     while (n>0){
        int ld =n%10;
        revNum = revNum*10+ld;
        n=n/10;
     }
     cout << revNum;
}

void checkPalindrome (int n){
    // string s = to_string(n);
    // int len = s.length();
    int dup = n, revNum=0,ld;
    while (dup>0){
        int ld = dup%10;
        revNum = revNum*10 + ld;
        dup = dup/10;
    }
    if (revNum == n) cout << "true: IS A PALINDROME";
   else cout <<  "false: IS NOT A PALINDROME";
}

void ArmstrongNumber (int n){
    int len = (int)(log10(n)+1);
    int ld, arm=0, dup=n;
    while (n>0){
        ld = n%10;
        arm = arm + pow(ld,len);
        n=n/10;
    }
    if (arm == dup) cout << "The number " << dup << " is an armstrong Number" << endl;
    else cout << "The number " << dup << " is not an armstrong Number" << endl;
}

void PrintDivisors(int n) {
    vector <int> vec;
    for (int i=1; i*i<=n; i++){
        if (n%i == 0) {
            vec.emplace_back(i);
    }
    int remInt = n/i;
    if (remInt != i){
        vec.emplace_back(remInt);
        }
    }
    sort(vec.begin(),vec.end());
    for (auto x : vec){
        cout << x << " ";
    }

}

void CheckPrime (int n){
    int count = 0;
    for (int i=1;i*i<=n;i++){
        int remInt = n/i;
        if (n%i==0){
            count++;
        
        if (remInt!=i){
            count++;
        }
    }
    }
    if (count ==2){
        cout << "PRIME NUMBER!";
    }
    else cout << "NOT PRIME NUMBER!";
}

void CheckGCD (int n1,int n2){
    int gcd = 1;
    for (int i=min(n1,n2);i>0;i--){
        if (n1%i==0 && n2%i==0){
            gcd = i;
            break;
        }
    }
    cout << gcd;
}

int EuclideanAlgo ( int n1, int n2){
    while (n1>0 && n2>0){
        if (n1>n2){
            n1 = n1%n2;
        }
        else if (n2>n1)
        {
            n2 = n2%n1;
        }
        if (n1==n2){
            cout << n1;
            break;
        }
        if (n1 == 0){
            cout << n2;
        }
        if (n2 == 0){
            cout << n1;
        }
    }
    
}

int EuclideanAlgo1(int n1, int n2) {
    while (n2 != 0) {  // Loop runs until n2 becomes 0
        int rem = n1 % n2;  // Find remainder
        n1 = n2;
        n2 = rem;
    }
    return n1;  // Return the GCD
}

int main(){
    int n1, n2;
    cout << "Enter a number: ";
    cin >> n1;
    cin >> n2;
    cout << "The GCD is " << (int)EuclideanAlgo1(n1,n2);

}