/*
write a function that calculates the length of a character array using only pointers. 
Pass that function as an argument to another function to evaluate it's correctness
*/
#include <iostream>
using namespace std;

typedef void(*call)(char c[]);
char c[16] = "hello";

int length()
{
	if (c[16] <= 10)
	{
		printf(c);
		cout << endl;
	}
	else
	{
		printf("nothing to say to you");
		cout << endl;
	}
	return c[16];
}

void main()
{
	length();
	system("pause");
}