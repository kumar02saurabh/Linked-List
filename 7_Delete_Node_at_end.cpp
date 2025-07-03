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
Node *Create_Linked_list(int arr[], int index, int size, Node *prev_address)
{
    if (size == index)
        return prev_address;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = prev_address;
    return Create_Linked_list(arr, index + 1, size, temp);
}
int main()
{
    Node *Head;
    Head = NULL;

    Node *prev_address = NULL;
    int arr[] = {6, 3, 6, 9, 4, 5};

    Head = Create_Linked_list(arr, 0, 6, prev_address);

    // delete Last  Node
    if (Head != NULL)
    {
        if (Head->next == NULL) //only 1 Node is present 
        {
            Node *temp1 = Head;
            Head = NULL;
            delete temp1;
        }
        else
        {
            // More than 1 Node
            Node *current = Head;
            Node *previous = NULL;
            while (current->next != NULL)
            {
                previous = current;
                current = current->next;
            }
            delete current;
            previous->next = NULL;
        }
    }

    // printing
    Node *temp;
    temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
