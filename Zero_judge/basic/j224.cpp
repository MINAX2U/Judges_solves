#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int s = 0;
    vector<int> pokemon = {};
    vector<int>::iterator erased;
    cin >> s;

    for (int i = 0; i < s; i++)
    {
        int tmp = 0;
        cin >> tmp;
        pokemon.push_back(tmp);
    }
    sort(pokemon.begin(), pokemon.end());

    erased = unique(pokemon.begin(), pokemon.end());
    pokemon.erase(erased, pokemon.end());

    int ans = pokemon.size();

    cout << ans;
}