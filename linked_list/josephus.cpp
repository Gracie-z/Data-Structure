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

typedef Node *NodePtr;

int main()
{
    int M, N;
    cout << "Enter N" << endl;
    cin >> N;
    cout << "Enter M" << endl;
    cin >> M;

    NodePtr traverse;
    traverse = new Node(1, NULL);
    traverse->next = traverse;

    NodePtr x = traverse;

    for (int i = 2; i <= N; i++)
    {
        traverse->next = new Node(i, x);
        traverse = traverse->next;
    }

    while (traverse->next != traverse)
    {
        for (int i = 1; i < M; i++)
            traverse = traverse->next;
        traverse->next = traverse->next->next;
    }
    cout << traverse->data << endl;
}