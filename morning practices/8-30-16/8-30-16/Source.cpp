/*write a function that takes another function as an argument.
store this argument in an array.
then execute every function in the array*/
#include <iostream>

int *fun(int a);

int one(int a)
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
	*fun num[] = 
	{
		one,
		multi,
		div
	};

	system("pause");
	return 0;
}