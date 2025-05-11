#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}

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

void remove(std::vector<int> &v)
{
    std::unordered_set<int> s;
    auto end = std::remove_copy_if(v.begin(), v.end(), v.begin(),
                        [&s](int const &i) {
                            return !s.insert(i).second;
                        });
    v.erase(end, v.end());
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);


    set<int> st;
    multiset<int> stm;
    for (auto it=stm.begin(); it != stm.end(); it++)     
    cout <<*it<<" ";
    cout <<"\n";
    for (auto rit=st.rbegin(); rit != st.rend(); rit++)     
    cout << *rit<<" ";




}