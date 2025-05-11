#include <iostream>
#include <vector>

using namespace std;

// Function to judge the type of triangle
int JudgeTraingle(vector<int> v)
{
    if (v[0] + v[1] <= v[2]){
        return 0;
    }
    else{
    if (v[0] * v[0] + v[1] * v[1] < v[2] * v[2])
    {
        return 1;
    }
    else if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
    {
        return 2;
    }
    else if (v[0] * v[0] + v[1] * v[1] > v[2] * v[2])
    {
        return 3;
    }
    }
}

// Function to sort the sides of the triangle
void bubbleSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = true;
            }
        }
        if (!flag)
            break;
    }
}

// Helper function to read integers using getchar_unlocked()
int readInt() {
    int n = 0;
    char c = getchar_unlocked();
    while (c < '0' || c > '9') c = getchar_unlocked();  // Skip non-digits
    while (c >= '0' && c <= '9') {
        n = n * 10 + (c - '0');
        c = getchar_unlocked();
    }
    return n;
}

// Helper function to write a number using putchar_unlocked()
void writeInt(int num) {
    if (num == 0) {
        putchar_unlocked('0');
        return;
    }
    
    char buffer[10];
    int i = 0;
    while (num > 0) {
        buffer[i++] = (num % 10) + '0';
        num /= 10;
    }
    // Output the number in reverse
    while (--i >= 0) {
        putchar_unlocked(buffer[i]);
    }
}

// Helper function to print a string using putchar_unlocked()
void writeStr(const char* str) {
    while (*str) {
        putchar_unlocked(*str++);
    }
}

// Function to print the sides of the triangle
void CoutABC(vector<int> v)
{
    for (int i = 0; i < 3; ++i) {
        writeInt(v[i]);
        if (i < 2) {
            putchar_unlocked(' ');
        }
    }
    putchar_unlocked('\n');
}

int main()
{
    vector<int> v(3);

    for (int i = 0; i < 3; i++)
    {
        v[i] = readInt();
    }

    bubbleSort(v);

    int result = JudgeTraingle(v);
    switch (result)
    {
    case 0:
        CoutABC(v);
        writeStr("No");
        break;
    case 1:
        CoutABC(v);
        writeStr("Obtuse");
        break;
    case 2:
        CoutABC(v);
        writeStr("Right");
        break;
    case 3:
        CoutABC(v);
        writeStr("Acute");
        break;
    }

    return 0;
}

