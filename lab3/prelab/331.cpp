#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *createLinkedList(int n); // The implementation is provided implicitly

bool isEqual(node *head1, node *head2)
{
    // TO DO
    while (head1 != NULL && head2 != NULL) {
        if (head1 -> data != head2 -> data) {
            return false;
        }
        // If we reach here, then head1 and head2 are not NULL and their data is same, so move to next nodes in both lists.
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    // If linked lists are identical, then 'a' and 'b' must be NULL at this point.
    return (head1 == NULL && head2 == NULL);
}

int main()
{
    int n = 0;
    cin>> n;
    node *head1 = createLinkedList(n);
    int m = 0;
    cin>> m;
    node *head2 = createLinkedList(m);
    cout << isEqual(head1, head2) << endl;
    return 0;
}
