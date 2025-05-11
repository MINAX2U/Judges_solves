#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<char, char> MAP;
    MAP['`'] = '`';
    MAP['1'] = '`';
    MAP['2'] = '1';
    MAP['3'] = '2';
    MAP['4'] = '3';
    MAP['5'] = '4';
    MAP['6'] = '5';
    MAP['7'] = '6';
    MAP['8'] = '7';
    MAP['9'] = '8';
    MAP['0'] = '9';
    MAP['-'] = '0';
    MAP['='] = '-';
    MAP['Q'] = 'Q';
    MAP['W'] = 'Q';
    MAP['E'] = 'W';
    MAP['R'] = 'E';
    MAP['T'] = 'R';
    MAP['Y'] = 'T';
    MAP['U'] = 'Y';
    MAP['I'] = 'U';
    MAP['O'] = 'I';
    MAP['P'] = 'O';
    MAP['['] = 'P';
    MAP[']'] = '[';
    MAP['\\'] = ']';
    MAP['A'] = 'A';
    MAP['S'] = 'A';
    MAP['D'] = 'S';
    MAP['F'] = 'D';
    MAP['G'] = 'F';
    MAP['H'] = 'G';
    MAP['J'] = 'H';
    MAP['K'] = 'J';
    MAP['L'] = 'K';
    MAP[';'] = 'L';
    MAP['\''] = ';';
    MAP['Z'] = 'Z';
    MAP['X'] = 'Z';
    MAP['C'] = 'X';
    MAP['V'] = 'C';
    MAP['B'] = 'V';
    MAP['N'] = 'B';
    MAP['M'] = 'N';
    MAP[','] = 'M';
    MAP['.'] = ',';
    MAP['/'] = '.';
    MAP[' '] = ' ';
    string str;
    while (getline(cin, str))
    {
        for (int i = 0; i < str.length(); i++)
        {
            cout << MAP[str[i]];
        }
        cout << "\n";
    }
    return 0;
}