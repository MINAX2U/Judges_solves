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

int main(){
    int n;
    cin >> n;
    vector<int> computers;
    for(int i=0;i<n;i++){
        int tmp=0;
        cin >> tmp;
        computers.push_back(tmp);
    }
    vector<int> ans = CountSort(computers);
    
    cout << ans[n-1];
}