#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor to take I/P
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    // Node N1(4); // Statically Created

    // dynamically
    Node *Head; // Pointer
    Head = NULL;

    int arr[] = {2, 6, 8, 12};
    // Insert The Node at Beginning
    // Linked List dosen't Exist
    for (int i = 0; i < 4; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }

        // Linked List Exist
        else
        {
            // Create New Node Temp
            Node *temp;
            temp = new Node(arr[i]);
            // point Temp ->next to head
            temp->next = Head;
            Head = temp;
        }
    }
    Node *temp = Head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
