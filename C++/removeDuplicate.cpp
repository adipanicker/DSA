#include <iostream>
#include <vector>
#include <set>

using namespace std;

// so I need to remove the duplicates in the array. 
//If there are k elements which are non duplicate then after the k elements I can store all the duplicates
//so in place swapping in the array itself

// [5,6,5,8,10,8,6]

// [1,1,2,2,3,4,5,5]

//my approach - use set, if occurence is more than one then remove that arr[i] and put


int removeDuplicates (vector <int> &arr, int n){
    int i=0;
        for (int j=1;j<n;j++){
            if (arr[i]!= arr[j]){
                i++;
                arr[i]=arr[j];
            }
        }
        return i+1;
    }

    int removeDuplicates2 (vector <int> &arr, int n){
        set<int>s (arr.begin(),arr.end());
        int i= s.size();
        int j=0;
        for (int x: s){
            arr[j++] = x;
        }
        return i;
    }


int main(){
    vector<int> arr = {1,1,2,3,3,4,5,5};
    int n = arr.size();
    int k = removeDuplicates2(arr,n);
    for (int i=0;i<k;i++){
        cout << arr[i] << " ";
    }
}