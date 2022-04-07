#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *createLinkedList(int n); // The implementation is provided implicitly

int countNode(node* head)
{
    //TODO
    int count = 0;
    while (head != NULL) {
        count++;
        head = head -> next;
    }
    return count;
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
    cout<<endl;
    cout<<countNode(head);
    return 0;
}
