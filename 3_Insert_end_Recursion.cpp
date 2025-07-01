#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
Node *Create_Linked_List(int arr[], int index, int size)
{
    // base case
    if (index == size)
    {
        return NULL;
    }

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = Create_Linked_List(arr, index + 1, size);

    return temp;
}
int main()
{
    Node *Head;
    Head = NULL;

    int arr[] = {5, 6, 3, 2, 4};
    Head = Create_Linked_List(arr, 0, 5);

    // Printing
    Node *temp;
    temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
