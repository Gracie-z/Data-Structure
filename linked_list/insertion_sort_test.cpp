#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d, Node *n)
    {
        data =d;
        next = n;
    }
};
typedef Node* NodePtr;

int main()
{   
    srand(time(0));
    Node heada(0,0);
    NodePtr a = &heada, t = a;
    for (int i = 0; i < 100; i++)
        {
            t = (t->next = new Node(rand()%1000,NULL));
        }
    for (t = a; t!=NULL; t= t-> next)
        cout << t -> data << " ";
    Node headb(0,NULL);
    NodePtr b =&headb, u,x;
    for (t = a->next; t != NULL; t =u)
        {
            u = t->next; // keep the next node
            for (x =b; x ->next != NULL; x = x-> next)
                {
                    if (x->next->data > t-> data)
                        break;
                }
            t -> next = x-> next;
            x -> next =t;
        }
    cout << "hey"<< endl;
    for (t = b; t!=NULL; t= t-> next)
        cout << t -> data << " ";
}