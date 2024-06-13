#include <iostream>
#include <stdexcept>

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            throw std::out_of_range("Stack underflow: pop from empty stack");
        }
        Node* temp = top;
        int poppedData = temp->data;
        top = top->next;
        delete temp;
        return poppedData;
    }

    int peek() {
        if (isEmpty()) {
            throw std::out_of_range("Stack underflow: peek from empty stack");
        }
        return top->data;
    }

    void display() {
        Node* current = top;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    std::cout << "Stack elements: ";
    stack.display();
    
    std::cout << "Top element is: " << stack.peek() << std::endl;

    std::cout << "Popped element: " << stack.pop() << std::endl;
    std::cout << "Stack elements after pop: ";
    stack.display();

    return 0;
}
