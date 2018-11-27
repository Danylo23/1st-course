#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main()
{
	int matrix[5][5];
	int line, column, variable1;
	for (line = 0; line < 5; line++)
	{
		for (column = 0; column < 5; column++)
		{
			scanf_s("%d", &matrix[line][column]);

		}
	}
	for (variable1 = 1; variable1 <= 5; variable1++)
	{
		for (line = 0; line < 4; line++)
		{
			for (column = 0; column < 5; column++)
			{
				if (matrix[line][column] < matrix[line + 1][column])
				{
					int variable2;
					variable2 = matrix[line][column];
					matrix[line][column = matrix[line + 1][column]];
					matrix[line + 1][column] = variable2;
				}
			}
		}
	}


	for (line = 0; line < 5; line++)
	{
		for (column = 0; column < 5; column++)
		{
			printf("%d\t", matrix[line][column]);

		}
		printf("\n");

	}

	int arr[5];

	for (int variable3 = 0, line = 0; line < 5; line++)
	{
		for (variable3 = matrix[line][1], column = 0; column < 5; column++)
		{
			if (variable3 < matrix[line][column])
			{
				variable3 = matrix[line][column];
			}

		}
		arr[line] = variable3;
		printf("max%d=%d\n ", line + 1, variable3);
		variable3 = 0;
	}

	int sum = 0;
	for (int line = 0; line < 5; line++) {
		sum += arr[line];
	}

	printf("Summ of max elements is: %d\n", sum);







	system("pause");

}