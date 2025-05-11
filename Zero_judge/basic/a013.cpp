#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int romanToInt(string s) {
        unordered_map<char, int> m;
        
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int ans = 0;
        
        for(int i = 0; i < s.length(); i++){
            if(m[s[i]] < m[s[i+1]]){
                ans -= m[s[i]];
            }
            else{
                ans += m[s[i]];
            }
        }
        return ans;
}

string intToRoman(int num) {
        string Roman = "";
        vector<pair<int, string>> storeIntRoman = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
        for (int i = 0; i < storeIntRoman.size(); i++) {
            while (num >= storeIntRoman[i].first) {
                Roman += storeIntRoman[i].second;
                num -= storeIntRoman[i].first;
            }
        }
        return Roman;
    }

int main(){
        string a,b="";
        while(cin>>a){
            if(a=="#")break;
            cin>>b;
            int na=romanToInt(a),nb=romanToInt(b);
            if(na==nb)cout<<"ZERO\n";
            else cout<<intToRoman(abs(na-nb))<<"\n";
        }
}


