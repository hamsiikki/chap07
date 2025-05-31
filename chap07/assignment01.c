// chap07 assignment01
// 202511214 김해미

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10


int main(void)
{
    int Arr[SIZE] = { 0 };
    int hang;
    int gongcha;

    printf("첫번째 항? ");
    scanf("%d", &hang);
    printf("공차? ");
    scanf("%d", &gongcha);

    Arr[0] = hang;

    printf("등차수열: %d", Arr[0]);

    for (int i = 1; i < SIZE; i++)
    {
        Arr[i] = Arr[i - 1] + gongcha;
        printf(" %d", Arr[i]);

    }
    printf("\n");
    return 0;
}
