#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        this ->data=d;
        this ->next=NULL;
        this ->prev=NULL;
    }
    ~Node(){
        int val = this ->data;
        if( next !=NULL){
            delete next;
            next =NULL;
        }
    }
};

void print( Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp ->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
}

void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp ->next=head;
    head->prev=temp;
    head = temp;
}

void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail ->next=temp;
    temp ->prev=tail;
    tail=temp;
}

void InsertAtPosition(Node* &tail,Node* &head,int position,int d){
   if(position==1){
    InsertAtHead(head,d);
    return;
   }
    Node* temp = head;
    int count=1;
    while(count<position-1){
      temp = temp->next;
      count++;
    }

    if(temp ->next==NULL){
        InsertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert=new Node(d);
    nodeToInsert->next = temp->next;   // connect forward first
    temp->next->prev = nodeToInsert;   // connect back from next node
    temp->next = nodeToInsert;         // finally connect current to new node
    nodeToInsert->prev = temp;
}

void deleteNode(int position,Node* &head){
    if(position==1){
        Node* temp =head;
        temp ->next -> prev=NULL;
        head = temp ->next;
        temp ->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* previous=NULL;
        int count=1;
        while(count<position){
          previous=curr;
          curr=curr ->next;
          count++;
        }
        curr ->prev=NULL;
        previous->next=curr->next;
        curr->next  =NULL;
        delete curr;       
    }
}

 
int main(){
    Node* node=new Node(2);
    Node* head=node;
     Node* tail=node;
    print(head);
    InsertAtHead(head,4);
    print(head);
   InsertAtTail(tail,6);
    print(head);

    InsertAtPosition(tail,head,2,9);
    print(head);
    
    InsertAtPosition(tail,head,4,22);
    print(head);
    
    InsertAtPosition(tail,head,1,7);
    print(head);
     
    deleteNode(1,head);
    print(head);
    
     deleteNode(4,head);
    print(head);
    
     deleteNode(2,head);
    print(head);
    
     deleteNode(3,head);
    print(head);
    
} 
    