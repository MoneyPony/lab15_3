#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define wagon 18
#define mest 36
int main() 
{
    srand(time(NULL));
    int train[wagon][mest];
    int number, i, j;
    setlocale(LC_ALL, "RUS");
    for (i = 0; i < wagon; i++) 
    {
        for (j = 0; j < mest; j++) 
        {
            train[i][j] = rand() % 2;
        }
    }
    do
    {
        printf("������� ����� ������ (�� 1 �� %d): ", wagon);
        scanf("%d", &number);
        if (number < 1 || number > wagon) 
        {
            printf("�������� ����� ������.\n");
        }
    } while (number < 1 || number > wagon);
    int free = 0;
    printf("��������� ������ %d:\n", number);
    for (j = 0; j < mest; j++) 
    {
        printf("%d ", train[number - 1][j]);
    }
    printf("\n");
    for (j = 0; j < mest; j++) 
    {
        if (train[number - 1][j] == 0) {
            printf("����� %d: ��������\n", j + 1);
            free++;
        }
        else 
        {
            printf("����� %d: ������\n", j + 1);
        }
    }
    printf("� ������ %d �������� %d ����(�).\n", number, free);
}