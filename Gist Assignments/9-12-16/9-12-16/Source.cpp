/*
Write a function that takes another Func as a parameter. 
The passed function need only to add two numbers. Can the passed function be overloaded? 
Explain why/why not
*/
#include <iostream>

typedef int(*num)(int a, int b);

int add(int a, int b) 
{
	return a + b;
}

void main()
{
	num together[] =
	{ 
		add 
	};

	std::cout << together[0](3,15) << std::endl;
	system("pause");
}
/*explaination

*/