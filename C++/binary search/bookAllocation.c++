#include <bits/stdc++.h>
using namespace std;

bool canGiveStudents(vector<int> &arr,int students, int maxPages){

    int currStudent = 1; 
    int currPages = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]+currPages <= maxPages){
            currPages+= arr[i];
        }
        else {
            currStudent++;
            currPages=arr[i];
        }
    }
    if(currStudent==students) return true;
    else return false;
}

int bookAllocation(vector<int> &arr, int m){
    int n = arr.size();
    if (m>n) return -1; 
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);

    for (int i=low;i<=high;i++){
        if(canGiveStudents(arr,m, i)){
            return i;
        }
    }
    return low;
}


int main(){
    vector<int> arr = {25,46,28,49,24}; // i number of books arr[i]=> number of pages in ith book;
    int m = 4; //number of students
    int ans = bookAllocation(arr,m);
    cout << ans;
}