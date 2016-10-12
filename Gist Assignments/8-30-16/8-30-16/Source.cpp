/*write a function that takes another function as an argument.
store this argument in an array.
then execute every function in the array*/
#include <iostream>

typedef int (*fun)(int a);

int show(int a)
{
	return a; 
}

int multi(int a)
{
	return a * 2; 
}

int div(int a)
{ 
	return a / 2;
}


int main()
{
	fun num[] = 
	{
		show,
		multi,
		div
	};

	for (int i = 0; i < 3; i++)
	{
		std::cout << num[i](90) << std::endl;
	}

	system("pause");
	return 0;
}