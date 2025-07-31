#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover-> next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL (Node* head){
    int cnt = 0;
    Node* temp = head;
    while (temp){
       
        temp = temp-> next;
        cnt++;
    }
    return cnt;
}

bool searchElementLL (Node* head, int n){
    Node* temp = head;
    while (temp){
         if (temp->data == n){
            return true;
        }
        temp = temp-> next;
    }
    return false;
}

int main(){
    vector <int> arr = {3212,5,8,7};
    Node* y = new Node(arr[0], nullptr);
    cout << y->data;
    cout << endl;
    Node* head = convertArr2LL(arr);
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp-> next;
    }

    //length
    int length = lengthOfLL(head);
    cout << "Length of LL is " << length << endl;

    //search in ll
    int n = 12;
    bool check = searchElementLL(head,n);
    cout << check;
}