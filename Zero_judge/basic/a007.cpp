/*
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

int main(){
    int n;
    while (cin>>n)
    {
        (isPrime(n))?cout<<"Y":cout<<"N";
    }
    
}

#include <cstdio>

// Prime-checking function
bool isPrime(int number) {
    if (number < 2) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i = 3; (i * i) <= number; i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int g[100000];  // 質數表
    int t = 0;      // 質數數量

    // 建立質數表
    for (int i = 2; i <= 100000; i++) {
        bool b = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                b = false;
                break;
            }
        }
        if (b) {
            g[t++] = i;
        }
    }

    int n;
    while (cin >> n) {
        bool b = true;
        int sq = sqrt(n);
        for (int i = 0; i < t; i++) {
            if (g[i] > sq) break;
            if (n % g[i] == 0) {
                b = false;
                break;
            }
        }

        if (b)
            cout << "質數" << endl;
        else
            cout << "非質數" << endl;
    }

    return 0;
}