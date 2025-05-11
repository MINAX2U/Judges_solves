#include <cstdio>
using namespace std;
int main()
{
    int A, B = 0;
    scanf("%d %d", &A, &B);
    (A>B)?printf("%d",A):printf("%d",B + 1);
}