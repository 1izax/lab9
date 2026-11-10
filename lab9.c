#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int a;
    char s;
    char choice;

    do
    {
        printf("-------------------------------------------------------------\n");
        printf("Введите сторону треугольника: ");
        scanf("%d", &a);
        printf("Введите символ: ");
        scanf(" %c", &s);
        printf("-------------------------------------------------------------\n");

        for (int i = 1; i <= a; i++)
        {
            for (int j = 0; j < i - 1; j++)
                printf(" ");
            for (int j = 1; j <= 2 * (a - i + 1) - 1; j++)
            {
                if (i == 1 || j == 1 || j == 2 * (a - i + 1) - 1)
                    printf("%c", s);
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("-------------------------------------------------------------\n");
        printf("Хотите нарисовать еще один треугольник? (1 - да, 0 - нет): ");
        scanf(" %c", &choice);
    } while (choice == '1');

    printf("Программа завершена.\n");
    return 0;
}