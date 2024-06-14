#include <iostream>
using namespace std;

class Stack {
private:
    int size;
    int top;
    int *stack;

public:
    Stack(int size) {
        this->size = size;
        this->top = -1;
        this->stack = new int[size];
    }

    ~Stack() {
        delete[] stack;
    }

    void push(int item) {
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            top++;
            stack[top] = item;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return -1; // or throw an exception
        } else {
            int item = stack[top];
            top--;
            return item;
        }
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1; // or throw an exception
        } else {
            return stack[top];
        }
    }

    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    Stack myStack(5);

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element: " << myStack.peek() << endl;

    cout << "Pop: " << myStack.pop() << endl;
    cout << "Pop: " << myStack.pop() << endl;

    cout << "Top element after pops: " << myStack.peek() << endl;

    return 0;
}
