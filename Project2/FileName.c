#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 1251 > nul");
    char productName[50];
    int quantity;
    float price;
    float totalValue;
    puts("\nВведіть назву товару:");
    scanf("%s", productName);
    puts("Введіть кількість на складі:");
    scanf("%d", &quantity);
    puts("Введіть ціну за одиницю (грн):");
    scanf("%f", &price);
    totalValue = quantity * price;
    printf("\n========================================\n");
    printf("          ІНФОРМАЦІЯ ПРО ТОВАР          \n");
    printf("========================================\n");
    printf("Назва товару:      %s\n", productName);
    printf("Кількість:         %d шт.\n", quantity);
    printf("Ціна за одиницю:   %.2f грн\n", price);
    printf("Загальна вартість: %.2f грн\n", totalValue);
    printf("========================================\n");
    return 0;
}