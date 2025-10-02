#include <iostream>
using namespace std;

class TwoStacks {
    int *arr;
    int size;
    int top1, top2;

public:
    // Constructor
    TwoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size; // start from end
    }

    // Push in stack1
    void push1(int x) {
        if (top1 < top2 - 1) {
            arr[++top1] = x;
        } else {
            cout << "Stack Overflow in Stack 1" << endl;
        }
    }

    // Push in stack2
    void push2(int x) {
        if (top1 < top2 - 1) {
            arr[--top2] = x;
        } else {
            cout << "Stack Overflow in Stack 2" << endl;
        }
    }

    // Pop from stack1
    int pop1() {
        if (top1 >= 0) {
            return arr[top1--];
        } else {
            cout << "Stack Underflow in Stack 1" << endl;
            return -1;
        }
    }

    // Pop from stack2
    int pop2() {
        if (top2 < size) {
            return arr[top2++];
        } else {
            cout << "Stack Underflow in Stack 2" << endl;
            return -1;
        }
    }

    // Peek functions
    int peek1() {
        if (top1 >= 0) return arr[top1];
        cout << "Stack 1 is empty" << endl;
        return -1;
    }

    int peek2() {
        if (top2 < size) return arr[top2];
        cout << "Stack 2 is empty" << endl;
        return -1;
    }

    // Check empty
    bool isEmpty1() { return top1 == -1; }
    bool isEmpty2() { return top2 == size; }
};

int main() {
    TwoStacks ts(10); // total size = 10

    ts.push1(5);
    ts.push1(10);
    ts.push2(15);
    ts.push2(20);

    cout << "Top of Stack 1: " << ts.peek1() << endl;
    cout << "Top of Stack 2: " << ts.peek2() << endl;

    cout << "Pop from Stack 1: " << ts.pop1() << endl;
    cout << "Pop from Stack 2: " << ts.pop2() << endl;

    cout << "Top of Stack 1 after pop: " << ts.peek1() << endl;
    cout << "Top of Stack 2 after pop: " << ts.peek2() << endl;

    return 0;
}
