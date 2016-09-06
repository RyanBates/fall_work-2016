//write a c++ program that creates the identity matrix.
#include <iostream>
#include <vector>

int matrix[4][4];
int num = 0;

int main()
{
	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			if (x == 0 && y == 0 || num == 5)
				matrix[x][y] = 1;
			else
				matrix[x][y] = 0;
			num++;
		}
	}
	for (int x = 0; x <= 4; x++)
	{
		for (int y = 0; y <= 4; y++)
			if (x < 3)
				std::cout << matrix[x][y];
	}
	
	system("pause");
	return 0;
}