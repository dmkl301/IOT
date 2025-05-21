#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Перевірка, чи передано аргумент
    if (argc < 2 || strlen(argv[1]) == 0) {
        printf("Невідомий користувач\n");
        return 0;
    }

    // Перевірка, чи ім'я "Admin"
    if (strcmp(argv[1], "Admin") == 0) {
        printf("Вітаю, адміністраторе!\n");
    } else {
        printf("Привіт, %s!\n", argv[1]);
    }

    return 0;
}
