#include <iostream>
using namespace std;
class circularQueue
{
private:
   int *arr;
   int front;
   int rear;
   int size;
public:
    circularQueue(int n ){
     size=n;
     arr=new int[size];
     front = rear = -1;
    }
    bool enqueue(int data){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout << "Queue is full" << endl;
            return false;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
         arr[rear]=data;
         return true;
    }    
  int dequeue(){
    if(front==-1){
         cout << "Queue is empty" << endl;
        return -1;
    }
    int ans=arr[front];
    arr[front]=-1;
    if(front==rear){
        front=rear=-1;
    }
    else if(front==size-1){
        front=0;
    }
    else{
        front++;
    }
     return ans;
  }
  void display() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        } else {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << endl;
    }
};

 int main() {
    circularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);  // should fill the queue

    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    q.display();

    q.enqueue(60);
    q.enqueue(70);

    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    q.display();

    return 0;
}
