#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    string x;
    while (getline(cin, x))
    {
        int count = 0;

        for (int i = 1; i < x.length(); i++)
        {
            if ((!isalpha(x[i])) && isalpha(x[i - 1]))
            { // If n[i] is not an alphabetic character and the previous character is an alphabetic character, increments the counter count
                count++;
            }
        }
        if (isalpha(x[x.length() - 1]))
        { // Check If The Last Character Is Alphabetical Or Not
            count++;
        }
        cout << count << "\n"; // Print The Count
    }
}
