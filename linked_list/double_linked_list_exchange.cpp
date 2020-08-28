// exchange nodes in a double linked list
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next, *prev;
    Node(int d, Node *n, Node *p)
    {
        data = d;
        next = n;
        prev = p;
    }
};

typedef Node *NodePtr;
NodePtr construct(int N);
void exchange(int A, int B,int N, NodePtr list);

int main()
{
    int N;
    cout << "How many items do you want ?" << endl;
    cin >> N;

    cout << "The link has been constructued.\n Enter the indexes of the nodes you want to exchange:" << endl;
    int A, B;
    cin >> A >> B;


    NodePtr list = construct(N);
    exchange(A,B,N,list);
    for (int i =1; i <= N; i++)
        {
            if ((i==A)||(i==B)) cout << i << "th item is " << list->data << endl;
            list = list -> next;
        }
}

NodePtr construct(int N)
{
    NodePtr head = new Node(1, NULL, NULL);
    NodePtr traverse = head;
    for (int i = 2; i <= N; i++)
        traverse = (traverse->next = new Node(i, NULL, traverse));
    traverse -> next = new Node(N+1,NULL,traverse);
    head->prev = new Node(0,head, NULL);
    
    return head;
}

void exchange(int A, int B,int N, NodePtr list)
{
    int m = min(A, B), n = max(A, B);
    NodePtr traverse;
    for (traverse = list;traverse->next->data != N+1;traverse = traverse->next)
            if (traverse -> data == m) 
                {
                    traverse->prev->next = new Node(n,traverse->next,traverse->prev);
                    traverse->next->prev = traverse->prev->next;
                }else if(traverse -> data == n)
                {
                    traverse->prev->next = new Node(m,traverse->next,traverse->prev);
                    traverse->next->prev = traverse->prev->next;
                }
}