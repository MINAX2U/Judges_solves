#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            pq.push(num);
        }

        int cost = 0;
        while (pq.size() > 1) {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            cost += a + b;
            pq.push(a + b);
        }

        cout << cost << endl;
    }

    return 0;
}