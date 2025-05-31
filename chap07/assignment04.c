// chap07 assignment04
// 202511214 ±èÇØ¹Ì

#include <stdio.h>

int main(void)
{
    int arr[10] = { 24, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

    printf("¹è¿­: ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    int a = arr[0];
    int b = 0;
    int x = arr[0];
    int y = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > a)
        {
            a = arr[i];
            b = i;
        }
        if (arr[i] < x)
        {
            x = arr[i];
            y = i;

        }
    }

    printf("ÃÖ´ñ°ª: ÀÎµ¦½º=%d, °ª=%d\n", b, a);
    printf("ÃÖ¼Ú°ª: ÀÎµ¦½º=%d, °ª=%d\n", y, x);


    return 0;

}