#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vc;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp = 0;
        cin >> tmp;
        vc.push_back(tmp);
    }
    sort(vc.begin(), vc.end());
    for (int j = 0; j < n; j++)
    {
        cout << vc[j] << " ";
    }
    cout << endl;
    if (vc[0] >= 60)
    {
        cout << "best case" << endl;
    }
    else
    {
        for (int k = 0; k < n; k++)
        {
            if (vc[k] >= 60)
            {
                cout << vc[k - 1] << endl;
                break;
            }
        }
        if (vc[n - 1] < 60)
        {
            cout << vc[n - 1] << endl;
        }
    }
    if (vc[n - 1] < 60)
    {
        cout << "worst case" << endl;
    }
    else
    {
        for (int l = 0; l < n; l++)
        {
            if (vc[l] >= 60)
            {
                cout << vc[l];
                break;
            }
        }
    }
}