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

Node* DeleteHead(Node*head){
    Node*temp=head;
    head=temp->next;
    temp->next=nullptr;
    delete temp;
    head->back=nullptr;
    return head;
}
Node* DeleteTail(Node*head){
    Node*temp=head;
    Node*prev=nullptr;
    while(temp->next!=nullptr){
        prev=temp;
        temp=temp->next;
    }
    prev->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}

Node* DeleteKthElement(Node* head,int k){
    if(head==nullptr || head->next==nullptr){
        return nullptr;
    }
    else{
        int count=0;
        Node*temp=head;
        Node*prev=nullptr;
        Node*fwrd=nullptr;
        while(temp){
            count++;
            if(count==k){
                break;
            }
            temp=temp->next;
        }
        prev=temp->back;
        fwrd=temp->next;
        if(prev==nullptr){
           return DeleteHead(head);
            
        }
        else if(fwrd==nullptr){
            return DeleteTail(head);
           
        }
        else{
            prev->next=fwrd;
            fwrd->back=prev;
            temp->next=nullptr;
            temp->back=nullptr;
            delete temp;
            return head;
        }
        
    }
}


int main(){
    vector<int> arr={1,2,3,4,5};
       Node* head=ConvertToDLL(arr);
  //  cout<<length(head)<<endl;
   // cout<<Check(head,5);
  // head=deletehead(head);
  head=DeleteKthElement(head,5);

   print(head);
}