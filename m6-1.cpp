#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[] = "INDONESIA RAYA MERDEKA";

    printf("Sebelum dibalik: %s\n", str);

    reverseString(str);
    printf("Setelah dibalik: %s\n", str);

    return 0;
}