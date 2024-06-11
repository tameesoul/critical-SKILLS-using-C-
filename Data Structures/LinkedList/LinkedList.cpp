#include<iostream>
using namespace std;

class LinkedListNode {
public:
    int data;
    LinkedListNode *next;

    LinkedListNode(int _data) {
        this->data = _data;
        this->next = nullptr;
    }
};

class LinkedListIterator {
private:
    LinkedListNode *currentNode;

public:
    LinkedListIterator() : currentNode(nullptr) {}
    LinkedListIterator(LinkedListNode *node) : currentNode(node) {}

    int data() const { return currentNode->data; }

    LinkedListIterator next() {
        currentNode = currentNode->next;
        return *this;
    }

    LinkedListNode* current() const { return currentNode; }

    bool operator!=(const LinkedListIterator& other) const {
        return currentNode != other.currentNode;
    }
};

class LinkedList {
public:
    LinkedListNode *head = nullptr;
    LinkedListNode *tail = nullptr;

    ~LinkedList() {
        while (head != nullptr) {
            LinkedListNode* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void InsertLast(int _data) {
        LinkedListNode *newNode = new LinkedListNode(_data);
        if (this->head == nullptr) {
            this->head = newNode;
            this->tail = newNode;
        } else {
            this->tail->next = newNode;
            this->tail = newNode;
        }
    }

    void printList() {
        for (auto itr = this->begin(); itr != this->end(); itr = itr.next()) {
            cout << itr.data() << " -> ";
        }
        cout << "NULL\n";
    }

    LinkedListIterator begin() const {
        return LinkedListIterator(this->head);
    }

    LinkedListIterator end() const {
        return LinkedListIterator(nullptr);
    }
};

int main() {
    LinkedList *list = new LinkedList();
    list->InsertLast(1);
    list->InsertLast(6);
    list->InsertLast(10);
    list->InsertLast(12);
    list->printList();
    delete list;
    return 0;
}
