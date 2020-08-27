#include <iostream>
using namespace std;
static const int MAX = 1000;

int main()
{
    int A[MAX];
    for (int i = 2; i <= MAX; i++ ) A[i] = 1;
    for (int i = 2; i <= MAX; i++)
        if (A[i])
            for (int j = i; i*j <= MAX; j++)
                A[i*j] = 0;
    for (int i=1 ; i<=MAX; i++)
        if (A[i])
            cout << i << " ";
}