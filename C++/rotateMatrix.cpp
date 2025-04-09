#include <bits/stdc++.h>
using namespace std;

void printMatrix (vector<vector<int>> &matrix){
    int n = matrix.size();

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate90clockwise(vector<vector<int>> &matrix){
    int n = matrix.size();

    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for (int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

void rotate90anticlockwise(vector<vector<int>> &matrix){
    int n = matrix.size();

    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for (int j=0;j<n;j++){
        int top = 0;
        int bottom = n-1;

        while (top < bottom){
            swap(matrix[top][j],matrix[bottom][j]);
            top ++;
            bottom --;
        }
    }
}



int main (){
    int n;
    cout << "Enter the size of the N x N matrix" << endl;
    cin >> n;
    vector <vector<int>> matrix (n, vector<int>(n));

    cout << "Enter the values of the matrix" << endl;

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix is " << endl;
    printMatrix(matrix);

    // rotate90clockwise(matrix);
    // cout << "Matrix after rotation is " << endl;
    // printMatrix (matrix);

    rotate90anticlockwise(matrix);
    cout << "Matrix after rotation is " << endl;
    printMatrix (matrix);
}