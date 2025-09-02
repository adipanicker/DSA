#include<bits/stdc++.h>
using namespace std;

void pairs(){
    pair<int,int> p={1,3};

    cout << p.first << " " <<p.second;

    pair<int, pair<int,int>> s={1,{3,4}};

    cout << s.first << " " << s.second.second << " "<< s.second.first;

    pair<int, int> arr[] = { {1,2},{2,5},{5,1}};

    cout << arr[1].second;
}

void vectors(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

        //declaring vectors
    vector<pair<int,int>> vec;
    // vector <pair<int,int>> vecex;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v1(5,100);

    vector <int> v2(5);
    vector <int> v4(4,20);
    vector <int> v3(v1);
}

void vectors1(){

        //inserting inside vectors
    vector <int> v1 {1,2,3,4};
    v1.emplace_back(5);

    v1.insert(v1.end(), {6,3,5});
    v1.insert(v1.end(),{7,8,9});
    v1.insert(v1.end(),(10));
    v1.emplace_back(11);
    
    for (int i=0;i<v1.size(); i++){
        for (int x:v1){
            cout<< x << " ";
        }

        cout << endl;
        for (i=0;i<v1.size();i++){
            cout << v1[i] << " ";
        }  
    }
    cout << endl;
    vector <int> v2(3);
   
    v2.assign({10,20,30,40,50});
    v2.emplace_back(100);

    for(int x:v2){
        cout << x << " ";
    }

    cout << endl;

    // using iterators
    vector<int>::iterator it = v2.begin();
    vector<int>::iterator it2 =v2.end();
    vector<int>::reverse_iterator it3 = v2.rend(); 

    it++;
    cout<< &(it) << " ";

    cout << endl;

    for (auto it=v2.begin();it != v2.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    
    //erase function
    v2.erase(v2.begin()+2,v2.begin()+4);
    for (int x : v2){
        cout << x << " ";
    }
    cout << endl;

    //inserting in middle 
    vector <int> v3(2,10);
    v3.insert(v3.begin(),300);
    v3.insert(v3.begin()+1,2,100);

    for (int x:v3){
        cout << x << " ";
    }
    // delete last element
    v3.pop_back();

    //size of vector
    cout<<v3.size();

    //swap vectors
    v1.swap(v3);

    //erases entire vector
    v1.clear();
}

void Explainlist(){
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);

    for (int x:ls){
        cout << x<< " ";
    }

}

void explainDeque(){

    deque<int>dq;

    dq.emplace_front(10);
    dq.emplace_back(20);


    for (int x:dq){
        cout<< x << " ";
    }
}

void Stacks(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);
    st.emplace(5);

    cout << st.top();
    cout << endl;

    st.pop();
    cout << st.top()<< endl;

    cout << st.size()<< endl;
    cout << st.empty()<< endl;
}

void Queues(){
    queue <int> q;
    q.emplace(4);
    q.push(3);
    q.push(2);

    q.back() += 5;

    cout << q.back();
    cout << " ";
    cout << q.front() << " ";

    q.pop();
    cout << q.front();

}

void ExplainPriorityQ(){
    priority_queue<int> pq;

    pq.push(5);
    pq.push(10);
    pq.push(15);
    //pq.emplace(20); 

    cout << pq.top();

    pq.pop();

    cout << pq.top();

    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(10);
    pq1.push(20);
    pq1.push(2);

    cout << pq1.top();

}

void explainSet(){
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(4);
    st.insert(3);

    auto it = st.find(10);
    auto it2 = st.find(5);
    st.erase(3);

    int cn = st.count(10);
    cout << cn << endl;
    cout << *st.find(2) << endl;

    if (it!= st.end()){
        cout << "Found " << *it << endl;
    }
    else {
    cout << "Not Found";
    };

}

void multiSet(){
    multiset<int> ms;

    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);

    ms.erase(1); // erases all 1's

    int cnt = ms.count(1);
    int cn = ms.count(2);
    cout << cnt << " " << cn;

    ms.erase(ms.find(2));

}

void explainMap(){
    map <int,int> mpp; // <key,value>
    map <int, pair <int,int>> mpp2;
    map < pair<int,int>,int> mpp3;

    mpp[1] = 2;
    mpp.emplace(3,1);
    mpp.insert({2,4});

    mpp2[2] = {3,4};

    for (auto it : mpp){
        cout << it.first <<" "<<it.second << endl;
    }

    auto it1 = mpp.find(3);
    cout << (*it1).second;
}

void explainExtra(){

    sort(a,a+n);
    sort(v.begin(),v.end());

    sort(a+2, a+4);

    sort(a, a+n, greater<int>); // decending order
   // sort (a, a+n, comp);

    pair <int,int> a[] = {{1,2},{2,1},{4,1}};

    bool comp(pair<int,int> p1, pair<int,int> p2){
        if (p1.second) < (p2.second) return true;
        if(p1.second > p2.second) return false;
        //they are equal
        if(p1.first > p2.first) return true;
        return false;
    }

    int num = 7;
    int setCount = __builtin_popcount(num);
    cout << setCount<< endl;
}



//pairs is useful for storing tuples/pairs
//vector is useful for cache utilization, random access;
//list is useful for in between element access; List is good for inserting elements and is more faster;
//deque is useful for first and last element access;
int main(){
    explainMap();
    return 0;
}