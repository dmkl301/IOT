#include <stdio.h>

#define MAX_TEMPS 20  

void readTemperatures(float temps[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Введіть температуру #%d: ", i + 1);
        scanf("%f", &temps[i]);
    }
}

void findMinMax(const float temps[], int n, float *min, float *max) {
    *min = *max = temps[0];
    for (int i = 1; i < n; i++) {
        if (temps[i] < *min) {
            *min = temps[i];
        }
        if (temps[i] > *max) {
            *max = temps[i];
        }
    }
}

void printResults(float min, float max) {
    printf("Мінімальна температура: %.2f\n", min);
    printf("Максимальна температура: %.2f\n", max);
}

int main() {
    float temperatures[MAX_TEMPS];  
    int n;

    printf("Скільки значень температур ви хочете ввести (не більше 20)? ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_TEMPS) {
        printf("Некоректна кількість значень!\n");
        return 1;
    }

    readTemperatures(temperatures, n);

    float minTemp, maxTemp;

    findMinMax(temperatures, n, &minTemp, &maxTemp);

    printResults(minTemp, maxTemp);

    return 0;
}
