#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int Num1, Num2, cnt = 0;
        cin >> Num1 >> Num2;
        for (int j = 1; j <= 32; j++)
        {
            if (j * j < Num1)
            {
                continue;
            }
            if (j * j > Num2)
            {
                break;
            }
            cnt += j * j;
        }
        cout << "Case " << i << ": " << cnt << endl;
    }
    return 0;
}