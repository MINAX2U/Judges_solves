#include <iostream>
using namespace std;

int main()
{
    float N;
    while (cin >> N)
    {
        float sum = 0;
        for (int i = 0; i < N; i++)
        {
            float tmp;
            cin >> tmp;
            sum += tmp;
        }
        if (sum / N > 59)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
}