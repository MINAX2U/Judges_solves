#include <cstdio>

using namespace std;

short unsigned int readInput() {
    short unsigned int num = 0;
    char ch = getchar_unlocked();
    while (ch != EOF && (ch < '0' || ch > '9')) {
        ch = getchar_unlocked();
    }
    if (ch == EOF) {
        return -1;
    }
    while (ch >= '0' && ch <= '9') {
        num = num * 10 + (ch - '0');
        ch = getchar_unlocked();
    }
    return num;
}
void writeOutput(short unsigned int num) {
    if (num == 0) {
        putchar_unlocked('0');
        return;
    }
    char buffer[5];
    int i = 0;
    while (num > 0) {
        buffer[i++] = (num % 10) + '0';
        num /= 10;
    }
    while (i--) {
        putchar_unlocked(buffer[i]);
    }
}

int main()
{
    short unsigned int p = 0, a, b, c;
    while (true) {
        a = readInput();
        if (a == (short unsigned int) -1) break;
        b = readInput();
        if (b == (short unsigned int) -1) break;
        c = readInput();
        if (c == (short unsigned int) -1) break;
        if ((a + b) > c && (a + c) > b && (b + c) > a)p++;
    }
    writeOutput(p);
    putchar_unlocked('\n');
}
