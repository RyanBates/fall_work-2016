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

float x = x * boxvertices[00] + y * boxvertices[10] + z * boxvertices[20] + w * boxvertices[30];
float y = x * boxvertices[01] + y * boxvertices[11] + z * boxvertices[21] + w * boxvertices[31];
float z = x * boxvertices[02] + y * boxvertices[12] + z * boxvertices[22] + w * boxvertices[32];
float w = x * boxvertices[03] + y * boxvertices[13] + z * boxvertices[23] + w * boxvertices[33];

float left = x--;
float right = x++;

float x =  2/ left - right;

void translate()
{
	
}

int main()
{
	
	system("pause");
	return 0;
}