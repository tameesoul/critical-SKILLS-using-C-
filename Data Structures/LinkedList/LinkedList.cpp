#include<iostream>
using namespace std;

class LinkedListNode
{
    public:
    int data;
    LinkedListNode *next;

    LinkedListNode(int _data)
    {
        this->data = _data;
        this->next = NULL;
    }
};

class LinkedListIterator
{
    private:
    LinkedListNode *currentNode;
    public:
    LinkedListIterator(LinkedListNode *node = NULL) { 
       this->currentNode = node;
    }

    int data()
    {
        return this->currentNode->data;
    }

    LinkedListIterator next()
    {
        if (this->currentNode != NULL) {
            this->currentNode = currentNode->next;
        }
        return *this;
    }

    LinkedListNode* current()
    {
        return this->currentNode;
    }
};

class LinkedList
{
    public:
    LinkedListNode *head = NULL; 
    LinkedListNode *tail = NULL;
    void InsertLast(int _data)
    {
        LinkedListNode *newNode = new LinkedListNode(_data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }else
        {
            this->tail->next = newNode;
            this->tail = newNode;
        }
    }

    LinkedListIterator begin()
    {
        LinkedListIterator itr(this->head);
        return itr;
    }

    void PrintList()
    {
        for(LinkedListIterator itr = this->begin(); itr.current() != NULL; itr.next())
        {
            cout<<itr.data()<<"->";
        }
        cout<<"NULL\n";
    }
};

int main()
{
    LinkedList *list = new LinkedList;
    list->InsertLast(1); 
    list->InsertLast(3); 
    list->InsertLast(4); 
    list->InsertLast(6);
    list->PrintList(); 
}
