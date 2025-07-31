#include <bits/stdc++.h>
using namespace std;

void printNum(int count){
    cout << count;
    
    if (count < 3){
        count++;
        printNum(count);
    }
}

void printNos(int n) {
    static int i=1;
     cout << i << " ";
     i++;
     if (i <=n){
         printNos(n);
     }
     else {
         return;
     }
     
 }

 void helper(int n, int i){
    cout << i << " ";
    i--;
    if (i=0){
        return;
        }
    
    else {
        helper(n,i);
    }
}

void sumOfSeries(int n) {
    // code here
    int power = 3;
    int sum = 0;
    for (int i=1;i<=n;i++){
        sum += pow(i,power);
    }
    cout << sum;
    
}

int factorial (int n){
    if (n==1) return 1;
    int fac =n*factorial(n-1);
    return fac;
}

void reverseArr (int i, int arr[], int n){
        if (i>=n/2) return;
        swap(arr[i],arr[n-i-1]);
        reverseArr(i+1,arr,n);
}

bool palindrome (int i, int n, string str){
    if (i>=n/2) return true;
    if(str[i]!=str[n-i-1]) return false;
    return palindrome(i+1,n,str);
}

string CleanedString (string str1){
    string cleaned = "";
    for (char c:str1){
        if (isalnum(c)){
            cleaned+= tolower(c);
        }
    }
    return cleaned;
}

int main (){
    string str1 = "A man, a plan, a canal: Panamaa";
    string str = CleanedString(str1);
    int n=str.length();
    
    palindrome(0,n,str);
        cout<< "The string is a "; 
         if (palindrome(0,n,str)==1) cout << "Palindrome"; else cout << "Non Palindrome"; 
      

       int num =9273;
       int numlen = (int) log10(num)+1;
       cout << numlen;
       return 0;
    }

//     int n;
//     cout << "Enter size of Array: ";
//     cin >> n;
//     cout << "Enter values of Array: ";
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     reverseArr(0,arr,n);
//    cout << "The reverse of Array is: ";
//    for (int i=0;i<n;i++){
//     cout << arr[i]<< " ";
//    }
//    cout << endl;


