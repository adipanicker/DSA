#include <iostream>
#include <vector>
#include <stdio.h>

// we need to find the average of the numbers present in the array
    // my approach - take an array - take sum using for loop of all elements - divide by size of array

using namespace std;

double arrayAverage (vector<int> & arr, int n){
    int sum = 0;

    for (int i=0;i<n;i++){
        sum += arr[i];
    }
    double average = (double)sum/ n;
    return average;
}


int main (){
    vector <int> arr = {3,3,3,435,322,132,233,99};
    int n = arr.size();
   double ans =  arrayAverage (arr,n);
   cout << ans;
}