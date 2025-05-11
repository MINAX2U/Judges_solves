#include <cstdio>

int main() {
    const char *message = "肥余";
    for (short unsigned i = 0; message[i] != '\0'; ++i) {
        putchar_unlocked(message[i]);
    }
    return 0;
}
