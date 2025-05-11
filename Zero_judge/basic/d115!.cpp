#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> &nums, vector<int> &current, int index, int m){
    if (current.size() == m){
        for (int num : current){
            cout << num << " ";
        }
        cout << endl;
        return;
    }
    if (index >= nums.size()){
        return;
    }
    current.push_back(nums[index]);
    dfs(nums, current, index + 1, m);
     //考慮當前數字
    current.pop_back();
    dfs(nums, current, index + 1, m); // 不考慮當前數字
}

int main(){
    int n, m;
    while (cin >> n && n != 0){
        vector<int> nums(n);
        for (int i = 0; i < n; i++){
            cin >> nums[i];
        }
        cin >> m;
        vector<int> current;
        sort(nums.begin(), nums.end());
        dfs(nums, current, 0, m);
        cout << endl;
    }
    return 0;
}