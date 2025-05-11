#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int F, N;
    cin >> F >> N;
    vector<int> num;
    map<int, int> mp;
    mp[0] = 5;
    mp[2] = 0;
    mp[5] = 2;
    bool finish = false;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        if (finish)
            break;
        num.push_back(tmp);
        if (i == 1)
            F = num[0];
        else if (i > 1)
        {
            if (num[i - 2] == num[i - 1])
                F = mp[num[i - 2]];
            else
                F = num[i - 1];
        }
        cout << F << " ";
        if ((F == 0 && tmp == 5) || (F == 2 && tmp == 0) || (F == 5 && tmp == 2))
        {
            cout << ": Lost at round " << i + 1 << "\n";
            finish = true;
            continue;
        }
        if ((F == 0 && tmp == 2) || (F == 2 && tmp == 5) || (F == 5 && tmp == 0))
        {
            cout << ": Won at round " << i + 1 << "\n";
            finish = true;
            continue;
        }
    }
    if (!finish)
        cout << ": Drew at round " << N << "\n";
    return 0;
}