// chap07 assignment01
// 202511214 ���ع�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10


int main(void)
{
    int Arr[SIZE] = { 0 };
    int hang;
    int gongcha;

    printf("ù��° ��? ");
    scanf("%d", &hang);
    printf("����? ");
    scanf("%d", &gongcha);

    Arr[0] = hang;

    printf("��������: %d", Arr[0]);

    for (int i = 1; i < SIZE; i++)
    {
        Arr[i] = Arr[i - 1] + gongcha;
        printf(" %d", Arr[i]);

    }
    printf("\n");
    return 0;
}
