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

    // printing
    Node *temp;
    temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
