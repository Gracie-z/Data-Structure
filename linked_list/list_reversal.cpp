#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int i, Node *t)
    {
        data = i;
        next = t;
    }
};

typedef Node* link;

link reverse(link x);

int main()
{
    link x = new Node(1,NULL);
    x -> next = new Node(2, NULL);
    x -> next -> next = new Node(3, NULL);
    link y = reverse(x);
    cout << y->data << endl;

}

link reverse(link x)
{
    link cur =x, nx, lst;
    while (cur != NULL)
    {
        nx = cur -> next;
        cur -> next = lst;
        lst = cur;
        cur = nx;
    }
    return lst;
}
