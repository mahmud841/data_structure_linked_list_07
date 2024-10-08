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

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size(Node *head)
{

    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert_function(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    // cout << tmp->val << endl;//tmp akhon pos-1 a ache
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_head_function(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_tail_function(Node *&head, Node *&tail, int val) // O(1)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    print_linked_list(head);
    cout<<"Tail "<<tail->val<<endl;
    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "Invalid Index Node" << endl;
    }
    else if (pos == 0)
    {
        insert_head_function(head, val);
    }
    else if (pos == size(head))
    {
        insert_tail_function(head, tail, val);
    }

    else
    {
        insert_function(head, pos, val);
    }

    // insert_function(head, 5, 100);
    print_linked_list(head);
    cout<<"Tail "<<tail->val<<endl;
    

    // cout << (*a).val << endl;
    // cout << a->val << endl;
    return 0;
}