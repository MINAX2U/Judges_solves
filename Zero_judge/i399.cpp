#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[3];
    scanf("%d%d%d", A, A + 1, A + 2);
    int num = 1;
    sort(A, A + 3, greater<int>());
    for (int i = 1; i < 3; i++)
    {
        if (A[i] == A[i - 1])
            num++;
    }
    printf("%d %d ", num, A[0]);
    for (int i = 1; i < 3; i++)
    {
        if (A[i] != A[i - 1])
            printf("%d ", A[i]);
    }
}
