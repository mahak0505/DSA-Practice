//linked list practice part 1
#include <iostream>
using namespace std;

class  Node
{
public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this ->data=data;
        this ->next=NULL;
    }
};
void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next =temp;
    tail  = temp;
}

void InsertAtPosition(Node* &tail,Node* &head,int position,int d){
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int count=1;
    while(count<position-1){
        temp = temp ->next;
        count++;
    }

    if(temp ->next==NULL){
        InsertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert=new Node(d);
    nodeToInsert ->next =temp ->next;
    temp ->next= nodeToInsert;
} 

void reverseLL(Node* &head){
    if(head==NULL || head->next==NULL){
        return;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* fwd=NULL;

    while(curr){
        fwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fwd;
    }
     head=prev;
}

void print(Node* &head){
 Node* temp = head;
 while(temp != NULL){
    cout<<temp -> data<<endl;
    temp =temp -> next;
 }
 cout<<endl;
}
 

int main(){
    Node* node1 = new Node(9);
    Node* node2 = new Node(5);
    // cout<<node1 -> data << endl;
    //  cout<<node1 -> next << endl;
    // cout<<node2 -> data << endl;
    //  cout<<node2 -> next << endl;
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head,14);
    InsertAtHead(head,6);
    print(head);
    cout<<"After tail"<<endl;
    InsertAtTail(tail,15);
     print(head);
     cout<<"after insertion in middle"<<endl;
     InsertAtPosition(tail,head,3,5);
     print(head);
     cout<<"After reversal: "<<endl;
     reverseLL(head);
     print(head);
}                      