#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* Convert(vector<int> &arr){
    Node*head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int length(Node* head){
    int count=0;
    Node* mover=head;
    while(mover){
        mover=mover->next;
        count++;
    }
    return count;
}
bool Check(Node*head,int val){
    Node*temp=head;
    while(temp){
        if(temp->data==val){
            return true;
        }
        else{
            temp=temp->next;
        }
    }
    return false;
}
void print(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

Node* DeleteKth(Node*head,int k){
    if(head==nullptr){
        return head;
    }
    else{
        Node*temp=head;
         int count=0;
         Node*prev=nullptr;
        if(k==1){
            head=temp->next;
            delete temp;
            return head;
        }
        else{
            while(temp){
                count++;
                if(count==k){
                    prev->next=prev->next->next;
                    delete temp;
                    break;
                }
                prev=temp;
                temp=temp->next;
            }
            return head;
        }
    }
}

int main(){
    vector<int> arr={1,2,3,4,5};
       Node* head=Convert(arr);
  //  cout<<length(head)<<endl;
   // cout<<Check(head,5);
   //head=deletehead(head);
   head=DeleteKth(head,1);
   print(head);
}