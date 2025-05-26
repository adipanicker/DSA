#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome (string s){
    int slen = s.size();
    int i=0, j= slen-1;
    
    while (i<j){
        if (s[i] != s[j]){
            return false;
        }
        else {
            i++;
            j--;
            
        }
    }
    return true;
}

bool checkPalindromeNum (int num){
    int rev = 0;
    int input = num;
    while (num!=0){
        int curr = num%10;
     rev = (rev *10) + curr;
        num = num/10;
    }
    if (rev == input) return true;
    else return false;
}



int main(){
    string s = "mom";
    int num = 2121;


    bool ans = checkPalindrome(s);
    if (ans){
        cout << "Palindrome" << endl;
    }
    else {
        cout << "not a palindrome" << endl;
    }

    bool ans1 = checkPalindromeNum(num);
        if (ans1){
            cout << "Number is palindrome";
        }
        else {
            cout << "Number not a palindrome";
        }

}