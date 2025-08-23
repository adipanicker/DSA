#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        Node* next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }

};


Node* convertArr2LL (vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i=1;i<arr.size();i++){
        Node* temp1 = new Node(arr[i]);
        temp->next = temp1;
        temp = temp1;
    }

    return head;
}

Node* deleteHead (Node* head){
    if (head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

int main(){
    vector <int> arr={2,5,9,7};
    Node* head = convertArr2LL(arr);

   Node* newHead = deleteHead(head);

    Node* temp = newHead;
    while (temp){
        cout << temp->data << " " ;
        temp=temp->next;
    }
}