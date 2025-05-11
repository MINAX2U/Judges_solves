#include <iostream>
using namespace std;

int main()
{

    string s1, s2;
    int n;
    cin >> s1 >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s2;
        int A = 0, B = 0;
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (s1[j] == s2[k] && j == k)
                {
                    A++;
                    break;
                }
                if (s1[j] == s2[k] && j != k)
                {
                    B++;
                    break;
                }
            }
        }
        cout << A << "A" << B << "B" << endl;
    }
}