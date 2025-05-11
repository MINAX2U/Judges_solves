#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a = 0, b = 0, n = 0;
    int total = 0;
    cin >> a >> b >> n;

    vector<int> v1;

    for (int i = 0; i < n; i++){
        int tmp = 0;
        cin >> tmp;
        v1.push_back(tmp);
    }
    for (int j = 0; j < n; j++){
        int sec = v1[j] % (a + b);
        if (sec < a)
            continue;
        else if (sec == a){
            total += b;
            continue;
        }
        else if (sec > a){
            total += b - (sec - a);
            continue;
        }
    }
    cout << total;

    return 0;
}