#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N = 0, M = 0;
    cin >> N >> M;
    vector<int> nums(N);
    for (int i = 0; i < N; ++i)
        cin >> nums[i];

    for (int i = 0; i < M; ++i)
    {
        int tmp = 0;
        cin >> tmp;
        cout << bs(nums, tmp) + 1 << "\n";
    }
}
