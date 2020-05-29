#include <cstdio>
#include <iostream>

#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
    curr = NULL;
    temp = NULL;

}

void LinkedList::AddNode(int addData)
{
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;
    
    if (head != NULL)
    {
        curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = n;       
    }
    else
    {
        head = n;
    }
    
}

void LinkedList::DeleteNode(int deleteData)
{
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;

    while (curr != NULL && curr->data != deleteData)
    {
        temp = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << deleteData << " was not in the LinkedList\n";
        delete delPtr;
    }
    else
    {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;

        delete delPtr;

    cout << "The value " << deleteData << " was delted\n";

    }
}

void LinkedList::PrintLinkedList()
{
    curr = head;
    while (curr != NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
    
}


