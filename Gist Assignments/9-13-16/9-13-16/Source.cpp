/*
Write a function that takes arguments to create a half circle.
Parameters should be radius number of points and the return value should be the half circle
if you want to pass by ref that is fine too
*/
#include <iostream>

int delta;

int pi = 3.14;

int semi = 0;

int circle;

void semicircle()
{
	semi == cos(delta) + sin(delta);
	circle = (semi * pi) * 180;
	std::cout << circle << std::endl;
}

void main()
{
	std::cout << semicircle << std::endl;
	system("pause");
}