#include <iostream>
#include <vector>
using namespace std;

string add(string a, string b) {
    string result = "";
    int carry = 0;
    int i = a.size()-1, j = b.size()-1;
    while(i >= 0 || j >= 0 || carry) {
        int digitA = (i >= 0) ? a[i--] - '0' : 0;
        int digitB = (j >= 0) ? b[j--] - '0' : 0;
        int sum = digitA + digitB + carry;
        carry = sum / 10;
        result = char(sum % 10 + '0') + result;
    }
    return result;
}

int main() {
    int n = 100;
    int ans =0;
    vector<string> fib(n+2);
    fib[0] = "0";
    fib[1] = "1";
    for(int i = 2; i <= n; i++) {
        fib[i] = add(fib[i-1], fib[i-2]);
    }
    while(cin>>ans){
        cout<<fib[ans+1]<<"\n";
    }    
}
