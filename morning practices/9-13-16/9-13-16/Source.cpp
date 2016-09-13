/*
Write a function that takes arguments to create a half circle.
Parameters should be radius number of points and the return value should be the half circle
if you want to pass by ref that is fine too
*/
#include <iostream>

int angle = 45;

int semi = 0;

int semicircle()
{
	semi = sin(angle) + sin(angle);
	return semi;
}

void main()
{
	std::cout << semicircle << std::endl;
	system("pause");
}