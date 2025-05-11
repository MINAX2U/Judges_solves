#include <cstdio>

using namespace std;

int main()
{
    short unsigned int p= 0,a,b,c;
    while (scanf("%hu %hu %hu",&a,&b,&c)==3)
    {
        if ((a+b)>c&&(a+c)>b&&(b+c)>a){
            p++;
        }
    }
    printf("%hu", p);
}
