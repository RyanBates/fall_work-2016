#include <iostream>

struct Point
{
public:
	float x; 
	float y;
};

struct Rectangle
{
public:
	Point bottomLeft;
	float width;
	float height;
};

bool IsPointWithinDistOfRectangle(const Rectangle& rect, const Point& point, float dist)
{
	if (point.x <= (rect.bottomLeft.x * dist) && point.y <= (rect.bottomLeft.y * dist) ||
		point.y <= (rect.bottomLeft.x * dist) && point.x <= (rect.bottomLeft.y * dist))
		return false;
	else
		return true;
}

void main()
{

	IsPointWithinDistOfRectangle(,,10);
	system("puase");
}