#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *createLinkedList(int n); // The implementation is provided implicitly

node *insertNode(node *head, node *newNode, int position)
{
    // TO DO
    if (position > 0) {
        node* p = head;
        for (int i = 1; i < position - 1; ++i) {
            if (p->next == NULL) {
                break;
            }
            p = p->next;
        }
        newNode->next = p->next;
        p->next = newNode;
    }
    return head;
}
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
int main()
{
    int n = 0;
    cin >> n;
    node *head = createLinkedList(n);
    node *newNode = new node();
    cin >> newNode->data;
    int position = 0;
    cin >> position;
    head = insertNode(head, newNode, position);
    print(head);
    return 0;
}


