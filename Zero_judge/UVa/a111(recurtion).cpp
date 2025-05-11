#include <iostream>
using namespace std;

int Feynman(int N)
{
    return N == 1 ? 1 : ((N * N) + Feynman(N - 1));
}

int main()
{
    int N;
    while (cin >> N)
    {
        if (N == 0)
        {
            break;
        }
        cout << Feynman(N) << endl;
    }
    return 0;
}