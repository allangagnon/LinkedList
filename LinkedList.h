#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList
{
private:
    
    typedef struct node
    {
        int data;
        node* next;
    }* nodePtr;
    
    //typedef struct node* nodePtr;

    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    

public:
    LinkedList();
    ~LinkedList();

    void AddNode(int addData);
    void DeleteNode(int deleteData);
    void PrintLinkedList();

};

LinkedList::LinkedList(/* args */)
{
}

LinkedList::~LinkedList()
{
}

#endif /* LinkedList_H */
