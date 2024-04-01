#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;
public:
Node(int data1,Node*prev){
    data=data1;
    next=nullptr;
    back=prev;
}
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
void print(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

Node* ConvertToDLL(vector<int>&arr){
    Node* head= new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i],prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}


int main(){
    vector<int> arr={1,2,3,4,5};
       Node* head=ConvertToDLL(arr);
  //  cout<<length(head)<<endl;
   // cout<<Check(head,5);
  // head=deletehead(head);
   print(head);
}