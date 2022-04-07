#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};
node *createLinkedList(int n)
{
    // TO DO
    int x;
    cin >> x;
    node* p = new node{x, NULL};
    node* head = p;
    --n;
    while (n--) {
        int x;
        cin >> x;
        node* j = new node{x,NULL};
        p->next = j;
        p = j;
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
  if (n > 0)
  {
    node *head = createLinkedList(n);
    print(head);
  }
  else
  {
    cout << "Invalid n" << endl;
  }
  return 0;
}
