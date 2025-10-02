#include <iostream>
using namespace std;

class arrayQueue
{
private:
    int *arr;
    int front;
    int rear;
    int size;
public:
  arrayQueue(int size){
    this ->size=size;
    arr=new int[size];
    front=0;
    rear=0;
  }
  bool isEmpty(){
     if(rear==front){
        return true;
     }
     return false;
  }
  void enqueue(int element){
    if(rear==size){
        cout<<"queue is full"<<endl;
    }
    arr[rear]=element;
    rear++;
  }
  void dequeue(){
      if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        arr[front]=-1;
        front++;
        if(front==rear){
            front=0;
            rear=0;
        }
  }
   void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i < rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
  int frontElement(){
    if(rear==front){
        return -1;
    }
    return arr[front];
  }
};
int main(){
    arrayQueue q(7);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    cout<<"front "<< q.frontElement()<<endl;
    q.dequeue();
   cout<<"front " << q.frontElement()<<endl;
    q.display();

}
