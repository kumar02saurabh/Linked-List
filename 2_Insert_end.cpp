#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node *Head, *Tail;
    Head = Tail = NULL;

    int arr[] = {2, 6, 4, 3, 5};

    for (int i = 0; i < 5; i++)
    {
        // Linked List is Empty
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        // Linked List Exist
        else
        {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }
    Node *temp = Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp  = temp->next;
    }
}
