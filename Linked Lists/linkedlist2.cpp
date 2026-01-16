//Linked list practice part 2
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
    //desturctor
    ~Node(){
        int val = this ->data;
        if(this ->next !=NULL){
            delete next;
            this -> next =NULL;
        }
    }
};
void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp ->next =head;
    head = temp;
}

void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail ->next = temp;
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

    Node* NodeToInsert = new Node(d);
    NodeToInsert ->next = temp ->next;
    temp ->next =NodeToInsert;
}
void deleteNode(int position,Node* &head){
    if(position==1){
        Node* temp =head;
        head = head ->next;
        temp ->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int count=1;
        while(count<position){
          prev=curr;
          curr=curr ->next;
          count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &head){
 Node* temp = head;
 while(temp != NULL){
    cout<<temp -> data<<",";
    temp =temp -> next;
 }
}

int main(){
    Node* node= new Node(5);
    Node* head=node;
    Node* tail=node;
    InsertAtHead(head,4);
    print(head);
    cout<<endl;
    InsertAtTail(tail,6);
    print(head);
    cout<<endl;
    InsertAtPosition(tail,head,2,9);
    print(head);
    cout<<endl;
    InsertAtPosition(tail,head,4,22);
    print(head);
    cout<<endl;
    InsertAtPosition(tail,head,1,7);
    print(head);
    cout<<endl;
    deleteNode(1,head);
    print(head);
    cout<<endl;
     deleteNode(4,head);
    print(head);
    cout<<endl;
     deleteNode(2,head);
    print(head);
    cout<<endl;
     deleteNode(3,head);
    print(head);
    cout<<endl;
}
