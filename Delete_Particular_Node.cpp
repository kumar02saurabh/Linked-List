/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // code here
        if(x == 1)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            Node *current = head;
            Node *previous = NULL;
            x--; // x= 0
            while(x--)
            {
                previous = current;
                current = current->next;
            }
            previous ->next = current->next;
            delete current;
        }
        return head;
    }
};
