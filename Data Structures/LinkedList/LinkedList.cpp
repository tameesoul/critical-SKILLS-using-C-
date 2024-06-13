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
            this->currentNode = this->currentNode->next;
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
    int length = 0;  // added length attribute

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
        length++;
    }

    void InsertAfter(LinkedListNode *node, int _data)
    {
        if (node == NULL) {
            cout << "The given previous node cannot be NULL\n";
            return;
        }
        LinkedListNode *newNode = new LinkedListNode(_data);
        newNode->next = node->next;
        node->next = newNode;
        if(node == this->tail)
        {
            this->tail = newNode;
        }
        length++;
    }

    LinkedListNode *findParent(LinkedListNode *node) {
        for (auto itr = this->begin(); itr.current() != NULL; itr.next()) {
            if (itr.current()->next == node) {
                return itr.current();
            }
        }
        return NULL;
    }

    void insertBefore(LinkedListNode *node, int _data) {
        LinkedListNode *newnode = new LinkedListNode(_data);
        newnode->next = node;

        LinkedListNode *parentNode = this->findParent(node);

        if (parentNode == NULL) {
            this->head = newnode;
        } else {
            parentNode->next = newnode;
        }
        length++;
    }

    void DeleteNode(LinkedListNode *node)
    {
        if(this->head == this->tail)
        {
            this->head = NULL;
            this->tail = NULL;
        }
        else if(this->head == node)
        {
            this->head= node->next;
        }
        else 
        {
            LinkedListNode *parentNode = this->findParent(node);
            if(this->tail == node)
            {
                this->tail = parentNode;
            }
            else{
                parentNode->next = node->next;
            }
        }
        length--;
        delete node;
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

    LinkedListNode *find(int _data)
    {
        for(LinkedListIterator itr = this->begin(); itr.current() != NULL; itr.next())
        {
            if(_data == itr.data())
            {
                return itr.current();
            }
        }
        return NULL;
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
    list->InsertAfter(list->find(3),99);
    list->PrintList(); 

    list->DeleteNode(list->find(3));
    list->PrintList(); 
}
