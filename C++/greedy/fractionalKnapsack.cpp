#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &a, pair<int,int> &b){
    double r1 = (double)a.first /a.second;
    double r2 = (double)b.first/b.second;
    return r1>r2;
}

int FractionalKnapsack (vector<pair<int,int>> &knapsack, int maxWeight){
    sort(knapsack.begin(),knapsack.end(),cmp);
    int currWeight =0;
    double finalValue = 0.0;

    for(auto &it : knapsack){
        if(currWeight + it.second <= maxWeight){
            currWeight += it.second;
            finalValue += it.first;
        }
        else {
            double UnitValue = (double)it.first/it.second;
            int remWeight = maxWeight-currWeight;
            double assignValue = UnitValue*remWeight;
            finalValue += assignValue; 
            break;
        }
    }
    return finalValue;
}


int main(){
    vector<pair<int,int>> knapsack = {{100,20},{60,2009},{105,50},{200,50}};
    int maxWeight = 90;
    int ans = FractionalKnapsack(knapsack,maxWeight);
    cout << "The answer is: " << ans;
}