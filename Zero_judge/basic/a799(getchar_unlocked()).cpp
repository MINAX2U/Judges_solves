#include <cstdio>
#include <cmath>

int readInt() {
    int num = 0, sign = 1;
    char ch = getchar_unlocked();
    if (ch == '-') {
        sign = -1;
        ch = getchar_unlocked();
    }
    while (ch >= '0' && ch <= '9') {
        num = num * 10 + (ch - '0');
        ch = getchar_unlocked();
    }
    
    return num * sign;
}

void writeInt(int num) {
    if (num < 0) {
        putchar_unlocked('-');
        num = -num;
    }
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
    while (i--) {
        putchar_unlocked(buffer[i]);
    }
}

int main() {
    int n = readInt();
    writeInt(abs(n));
    putchar_unlocked('\n');
    
    return 0;
}
