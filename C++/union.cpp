#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion (int arr1[], int arr2[], int n, int m){
    set <int> st;

    for (int i=0;i<n;i++){
        st.insert(arr1[i]);
    }
    for (int i=0;i<m;i++){
        st.insert(arr2[i]);
    }

    vector <int> vec (st.begin(),st.end());
    return vec;
}

vector <int> UnionPointer (int arr1[], int arr2[], int n, int m){
    vector <int> UnionArr;
    int i=0;
    int j=0;

    while (i<n && j<m){
        if (arr1[i]<=arr2[j]){
            if (UnionArr.size()==0 || arr1[i]!= UnionArr.back()){
                UnionArr.push_back(arr1[i]);
            }
            i++;
        }

        else {
            if (UnionArr.size() == 0 || UnionArr.back() != arr2[j]){
                UnionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (j<m){
        if (UnionArr.size() == 0 || UnionArr.back() != arr2[j]){
            UnionArr.push_back(arr2[j]);
        }
        j++;
    }

    while (i<n){
            if (UnionArr.size()==0 || arr1[i]!= UnionArr.back()){
                UnionArr.push_back(arr1[i]);
            }
            i++;
    }

    return UnionArr;

}

int main(){
    int arr1[] = {1,2,3,4,5,5};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {4,2,12,4,2,1,6};
    int m = sizeof (arr2)/sizeof(arr2[0]);

     vector <int> vecres = UnionPointer(arr1,arr2, n, m);
     for (auto it:vecres){
        cout << it << " ";
     }
}