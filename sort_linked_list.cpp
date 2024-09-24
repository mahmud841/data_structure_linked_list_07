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
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail_function(head, tail, val);
    }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(a[i]>a[j])
    //         {
    //             swap(a[i],a[j]);
    //         }
    //     }
    // }   //ata akhon linked list a sort korbo
    for (Node *i = head; i->next != NULL;i= i->next)
    {
        for (Node *j = head; j != NULL; j=j->next)
        {
            // cout << i->val << " " << j->val << endl;
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
        // cout<<endl;
    } 
    print_linked_list(head);

    return 0;
}