#include <bits/stdc++.h>
using namespace std;

void countFreq (vector <int> &arr){
    int n = arr.size();
    unordered_map <int, int> mpp;

    for (int x : arr){
        mpp[x]++;
    }

    for (auto p : mpp){
        cout << p.first<< "->" << p.second << endl;
    }
}

void countFreq2 (vector <int> &arr){
    int n = arr.size();
    vector <bool> visited (n,false);

    for (int i=0;i<n;i++){
        if (visited[i] == true) continue;

        int count = 1;
        for (int j=i+1;j<n;j++){
            if (arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " -> " << count << endl;
    }
}

int main (){
    vector <int> arr;

    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        arr.emplace_back(x);
    }

    countFreq2(arr);
    return 0;
}