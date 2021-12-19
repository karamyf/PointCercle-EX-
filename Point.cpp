#include <iostream>
#include <math.h>
#include "Point.h"

using namespace std;


Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(double x, double y)
{
	x = x;
	y = y;
}

void Point::Afficher()
{
cout << x << "," <<y ;
}

double Point::Distance(Point p)
{
	return sqrt(pow(p.x - x,2)+pow(p.y - y,2));
}
