#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x;
    for(int i=0; i<n;i++){
        int tmp = 0;
        cin >> tmp;
        x.push_back(tmp);
    }
    reverse(x.begin(), x.end());
    for(int j=0; j<n;j++){
        cout << x[j] << " ";
    }
    return EXIT_SUCCESS;
}