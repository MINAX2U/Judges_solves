#include <cstdio>
int main(){
    printf("VXc8bW 我已加入!!");
}

#include <cstdio>

int main() {
    const char *message = "VXc8bW 我已加入!!";
    fwrite_unlocked(message, sizeof(char), sizeof(message) - 1, stdout);
    return 0;
}


#include <cstdio>

int main() {
    const char *message = "VXc8bW 我已加入!!";
    setvbuf(stdout, NULL, _IONBF, 0);  // Disable buffering for stdout
    fwrite_unlocked(message, sizeof(char), sizeof(message) - 1, stdout);
    return 0;
}

//後面兩個不允許靠杯

#include <cstdio>

int main() {
    const char *message = "VXc8bW 我已加入!!";
    for (short unsigned i = 0; message[i] != '\0'; ++i) {
        putchar_unlocked(message[i]);
    }
    return 0;
}
