#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool is_head();

int main()
{
    cout << "We will roll the dice ____ times" << endl;
    int N; // time per experiment
    cin >> N;
    cout << "We will repeat the experiment for ___ times" << endl;
    int M; // the number of experiments
    cin >> M;
    int head_num = 0;
    int *p = new int[N + 1];
    for (int i = 0; i <= N; i++)
        p[i] = 0;
    for (int j = 1; j <= M; j++)
    {
        for (int i = 1; i <= N; i++)
            if (is_head())
                head_num += 1;
        p[head_num] += 1;
        head_num = 0;
    }
    for (int j = 0; j <= N; j++)
        {
            if (p[j] == 0) cout << ".";
            for (int i=1; i<=p[j]; i+=5) cout << "$";
            cout << endl;          
        }
}

bool is_head()
{
    return (rand() < RAND_MAX / 2);
}