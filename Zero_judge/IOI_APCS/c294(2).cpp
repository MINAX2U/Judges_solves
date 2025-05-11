#include <iostream>
#include <vector>

using namespace std;

int JudgeTraingle(vector<int> v)
{
    if (v[0] + v[1] <= v[2]){
        return 0;
    }
    else{
    if (v[0] * v[0] + v[1] * v[1] < v[2] * v[2])
    {
        return 1;
    }
    else if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
    {
        return 2;
    }
    else if (v[0] * v[0] + v[1] * v[1] > v[2] * v[2])
    {
        return 3;
    }
    }
}

void bubbleSort(vector<int> &v)
{

    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = true;
            }
        }
        if (!flag)
            break;
    }
}

void CoutABC(vector<int> v)
{
    for (auto i : v)
        cout << i << " ";
    cout << "\n";
}

int main()
{
    vector<int> v;

    for (int i = 0; i < 3; i++)
    {
        int tmp = 0;
        cin >> tmp;
        v.push_back(tmp);
    }

    bubbleSort(v);

    int result = JudgeTraingle(v);
    switch (result)
    {
    case 0:
    {
        CoutABC(v);
        cout << "No";
        break;
    }
    case 1:
    {
        CoutABC(v);
        cout << "Obtuse";
        break;
    }
    case 2:
    {
        CoutABC(v);
        cout << "Right";
        break;
    }
    case 3:
    {
        CoutABC(v);
        cout << "Acute";
        break;
    }
    }
    return 0;
}