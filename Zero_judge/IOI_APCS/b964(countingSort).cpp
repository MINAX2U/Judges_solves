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

void PrintArray(vector<int> &array)
{
    for (auto i : array)
    {
        cout << i << " ";
    }
    cout << endl;
}

void PrintBestWorstCase(vector<int> &outputArray, int size)
{
    if (outputArray[size - 1] < 60)
    {
        cout << outputArray[size - 1] << "\n";
        cout << "worst case" << endl;
    }
    else if (!outputArray.empty() && outputArray[0] >= 60)
    {
        cout << "best case" << "\n";
        cout << outputArray[0] << endl;
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            if (outputArray[i] < 60 && (i + 1 < size && outputArray[i + 1] >= 60))
            {
                cout << outputArray[i] << "\n"
                     << outputArray[i + 1] << endl;
                break;
            }
        }
    }
}

int main()
{
    int inputArraySize = 0;
    cin >> inputArraySize;

    vector<int> inputArray;
    for (int i = 0; i < inputArraySize; i++)
    {
        int tmp = 0;
        cin >> tmp;
        inputArray.push_back(tmp);
    }

    vector<int> outputArray = CountSort(inputArray);
    PrintArray(outputArray);

    PrintBestWorstCase(outputArray, inputArraySize);

    return 0;
}