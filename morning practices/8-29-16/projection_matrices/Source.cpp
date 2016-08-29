/*/write functions to generate projection matrices.orthographic and perspective view matrices.
try to do it without looking up the formula for orthographic
think of the matrix and the box it makes
what type of parameters are required to make a cube
and what are there positions relative to the matrix
hint: 2 / right - left is x/*/
#include <iostream>

float boxvertices[] = {
	2,0,0,0,
	0,2,0,0,
	0,0,-2,0,
	0,0,0,1 };

float left[] = { -2,0,0,0 };
float right[] = { 2,0,0,0 };

int x =  2/ right[0] - left[0];

void translate()
{
	float matrix = boxvertices[15] - x;
	boxvertices - x;
	std::cout << boxvertices[00] << " " << boxvertices[01] << " " << boxvertices[02] << " " << boxvertices[03] << std::endl;
	std::cout << boxvertices[04] << " " << boxvertices[05] << " " << boxvertices[06] << " " << boxvertices[07] << std::endl;
	std::cout << boxvertices[8] << " " << boxvertices[9] << " " << boxvertices[10] << " " << boxvertices[11] << std::endl;
	std::cout << boxvertices[12] << " " << boxvertices[13] << " " << boxvertices[14] << " " << boxvertices[15] << std::endl;
	std::cout << std::endl;
	std::cout << matrix << std::endl;

}

int main()
{
	translate();
	system("pause");
	return 0;
}