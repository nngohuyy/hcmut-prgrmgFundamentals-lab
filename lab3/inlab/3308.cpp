#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *createLinkedList(int n); // The implementation is provided implicitly

void replace(node* head, int position, int value)
{
    //TODO
    node* p = head;
    int pos = 0;
    while (p != NULL) {
        if (pos == position) {
            p->data = value;
        }
        p = p->next;
        pos++;
    }
}
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}
int main()
{
    int n = 0;
    cin >> n;
    node *head = createLinkedList(n);
    print(head);
    int pos, val;
    cin>>pos>>val;
    replace(head, pos, val);
    print(head);
    return 0;
}
