/*/
write a program that generates a matrix translation for any identity matrix
for example
what is the resulting matrix when transformation of[5, 3, 2, 1] is applied to the identity
/*/
#include <iostream>
int Matrix[4][4];
int matrix[] = { 5,3,2,1 };

int main()
{
	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			Matrix[x][y] = Matrix[x][y] * matrix[5, 3, 2, 1];
			std::cout << Matrix[x][y];

		}
	}

	system("pause");
	return 0;
}