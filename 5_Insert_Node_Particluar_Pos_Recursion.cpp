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
    int arr[] = {6, 5, 3, 2, 1, 9};
    Head = Create_Linked_list(arr, 0, 6, prev_address);

    // Insert Node at particular Position
    int pos = 3;
    int value = 30;

    Node *temp = Head;
    pos--; // decrement the position value, new position value is pos = 2

    while (pos--) // while(pos == 2) increment temp to position 2
    {
        temp = temp->next;
    }
    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // printing
    Node *temp3;
    temp3 = Head;
    while (temp3)
    {
        cout << temp3->data << " ";
        temp3 = temp3->next;
    }
}
