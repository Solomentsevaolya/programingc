#include <stdio.h>

int main() {
    char str[81];
    printf("Введите строку символов (до 80 символов): ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'b') {
            str[i] -= 32;
        }
    }

    printf("Полученная строка: %s\n", str);

    return 0;
}
