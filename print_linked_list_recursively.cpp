#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_recursivly(Node *n)
{
    if (n == NULL)
        return;
    cout << n->val << " ";
    print_recursivly(n->next);
}
void print_recursivly_reverse(Node *n)
{
    if (n == NULL)
        return;
    print_recursivly_reverse(n->next);
    cout << n->val << " ";
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_recursivly(head);
    cout << endl;
    print_recursivly_reverse(head);

    return 0;
}