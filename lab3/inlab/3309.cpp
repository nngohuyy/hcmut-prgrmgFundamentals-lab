#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *createLinkedList(int n); // The implementation is provided implicitly

int searchLinkedList(node* head, int key)
{
    // TODO
    node* p = head;
    int pos = 0;
    while (p != NULL) {
        if (p->data == key) {
            return pos;
        }
        p = p->next;
        pos++;
    }
    return -1;
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
    print(head);
    int m;
    cin>>m;
    cout<<searchLinkedList(head,m);
    return 0;
}
