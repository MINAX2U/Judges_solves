#include <cstdio>
#include <unordered_map>
#include <vector>
#include <cmath>
using namespace std;
unordered_map<char, int> roman_map = {
    {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
vector<pair<int, const char *>> storeIntRoman = {
    {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
void readRoman(char *str)
{
    char ch;
    int i = 0;
    while ((ch = getchar_unlocked()) != ' ' && ch != '\n' && ch != EOF)
    {
        str[i++] = ch;
    }
    str[i] = '\0';
}
void writeString(const char *str)
{
    while (*str)
    {
        putchar_unlocked(*str++);
    }
}
int romanToInt(const char *s)
{
    int ans = 0;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i + 1] != '\0' && roman_map[s[i]] < roman_map[s[i + 1]])
        {
            ans -= roman_map[s[i]];
        }
        else
        {
            ans += roman_map[s[i]];
        }
    }
    return ans;
}
void intToRoman(int num, char *Roman)
{
    int index = 0;
    for (int i = 0; i < storeIntRoman.size(); i++)
    {
        while (num >= storeIntRoman[i].first)
        {
            const char *roman_part = storeIntRoman[i].second;
            while (*roman_part)
            {
                Roman[index++] = *roman_part++;
            }
            num -= storeIntRoman[i].first;
        }
    }
    Roman[index] = '\0';
}

int main()
{
    char a[20], b[20], result[20];

    while (true)
    {
        readRoman(a);
        if (a[0] == '#')
            break;
        readRoman(b);

        int na = romanToInt(a), nb = romanToInt(b);
        if (na == nb)
        {
            writeString("ZERO\n");
        }
        else
        {
            intToRoman(abs(na - nb), result);
            writeString(result);
            putchar_unlocked('\n');
        }
    }
}
