#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> CountSort(vector<int> &inputArray)
{
    auto [mn, mx] = minmax_element(begin(inputArray), end(inputArray));
    int range = *mx - *mn + 1, shift = *mn;

    vector<int> count(range);

    for (auto &n : inputArray)
        count[n - shift]++;

    for (int i = 1; i < count.size(); ++i)
        count[i] += count[i - 1];

    vector<int> result(inputArray.size());

    for (int i = inputArray.size() - 1; i >= 0; --i)
    {
        result[count[inputArray[i] - shift] - 1] = inputArray[i];
        count[inputArray[i] - shift]--;
    }

    return result;
}

int main()
{
    int arr[5];
    int al = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v = {};
    for (int i = 0; i < 10; i++)
    {
        int tmp = 0;
        cin >> tmp;
        v.push_back(tmp);
    }
    v = CountSort(v);
    for (auto j : v)
    {
        al += j;
    }
    al /= 4;
    arr[2] = al - (v[0] + v[9]); // c
    arr[4] = v[8] - arr[2];      // e
    arr[3] = v[9] - arr[4];      // d
    arr[0] = v[1] - arr[2];      // a
    arr[1] = v[0] - arr[0];      // b
    vector<int> av(arr, arr + n);
    av = CountSort(av);
    for (auto k : av)
    {
        cout << k << " ";
    }
}