#pragma once
struct vector2D
{
public:
	float x, y;

	vector2D sum(vector2D rhs);
	vector2D diff(vector2D rhs);
	float distance(vector2D rhs);
	void vecPrint();
};

