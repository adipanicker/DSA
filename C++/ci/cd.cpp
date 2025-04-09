#include <bits/stdc++.h>
using namespace std;

int numberOfProcesses(vector<pair<int,int>>&processes){
    //sort the pairs in ascending order of their end time;

    sort(processes.begin(),processes.end(),[](pair<int,int>a,pair<int,int>b){
        return a.second < b.second;
    });

    //checking processes

    int count = 0;
    int lastEndtime = -1;

    for(int i = 0; i < processes.size(); i++){
        if(processes[i].first >= lastEndtime) {
            count++;
            lastEndtime = processes[i].second;
        }
    }
  
  cout << count << endl;
  return 0;
}

int main(){
    vector <pair <int,int>> processes={{1,2},{3,4},{6,7},{5,8},{4,5}};
    numberOfProcesses(processes);

}

