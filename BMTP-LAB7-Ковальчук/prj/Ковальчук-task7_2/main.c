#include <stdio.h>

int main() {
    int numbers[50];

    // Зчитуємо 50 чисел
    printf("Введіть 50 чисел:\n");
    for (int i = 0; i < 50; i++) {
        scanf("%d", &numbers[i]);
    }

    // Виводимо пари в один рядок, розділяючи їх крапкою з комою
    printf("Парна послідовність: ");
    for (int i = 0; i < 25; i++) {
        printf("%d %d", numbers[i], numbers[49 - i]);
        if (i < 24) { // Додаємо крапку з комою, крім останньої пари
            printf("; ");
        }
    }
    printf("\n");

    return 0;
}
