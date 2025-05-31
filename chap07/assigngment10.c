// chap07 assignment10
//202511214 김해미

#include <stdio.h>
#define ROW 3
#define COL 3

int main(void)
{
	int x[ROW][COL] = 
	{
		{10, 20, 30}, {40, 50, 60}, {70, 80, 90},
	};
	
	printf("x 행렬: \n");
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
			printf(" %d", x[i][j]);
		printf("\n");
	}
	
	int y[ROW][COL] =
	{
		{9, 8, 7}, {6, 5, 4}, {3, 2, 1},
	};

	printf("y 행렬: \n");
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
			printf(" %d", y[i][j]);
		printf("\n");
	}
	
	printf("x + y 행렬: \n");
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			int z = x[i][j] + y[i][j];
			printf(" %d", z);
		}
		printf("\n");
	}

	return 0;

}
