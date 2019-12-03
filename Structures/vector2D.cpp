#include "vector2D.h"
#include <cmath>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

vector2D vector2D::sum(vector2D rhs)
{
	vector2D temp;
	temp.x = this->x + rhs.x;
	temp.y = this->y + rhs.y;
	return temp;
}

vector2D vector2D::diff(vector2D rhs)
{
	vector2D temp;
	temp.x = (*this).x - rhs.x;
	temp.y = this->y - rhs.y; // -> character auto dereferences
	return temp;
}

float vector2D::distance(vector2D rhs)
{
	return sqrt((this->x - rhs.x) * (this->x - rhs.x) +
				(this->y - rhs.y) * (this->y - rhs.y));
}

void vector2D::vecPrint()
{
	cout << this->x << ", " << this->y << endl;
}
