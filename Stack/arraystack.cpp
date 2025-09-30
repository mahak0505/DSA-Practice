#include <iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this ->size=size;
        arr = new int[size];
        top=-1;
    }
  void push(int element){
    if(top<size-1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"stack overflow"<<endl;
    }
  }
  void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"Stack Underflow"<<endl;
    }
  }
  int peek(){
    if(top>=0 && top<size)
       return arr[top];
    else{
        cout<<"stack is empty"<<endl;
        return -1;
    }
  }
  bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
  }
};

int main(){
    Stack s(8);
    s.push(3);
    s.push(6);
    s.push(5);
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
}