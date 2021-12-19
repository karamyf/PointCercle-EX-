#include <iostream>
#include <cmath>
#include "Cercle.h"

using namespace std;

Cercle::Cercle()
{
	c = Point::Point(0, 0);
	rayon = 1;
}

Cercle::Cercle(Point p, double rayon)
{
	c = p;
	rayon = rayon;
}

Cercle Cercle::Creator()
{
	return Cercle();
}

Cercle Cercle::Creator(Point p, double rayon)
{
	return Cercle(p, rayon);
}

void Cercle::Afficher()
{
	c.Afficher();
	cout <<rayon ;
}

void Cercle::ChangementRayon(double rayon2)
{
	if (rayon2 > 0)
		rayon = rayon2;
}

void Cercle::Translation(double x2, double y2)
{
	c = Point::Point(x2, y2);
}

double Cercle::Surface()
{
	return pow(r, 2) * 3.141592;
}

double Cercle::Perimetre()
{
	return 2*3.141592*r;
}

bool Cercle::Comparer(Cercle c2)
{
	return c2.rayon == rayon;
}

bool Cercle::Appartenance(Point p)
{
	return c.Distance(p) <= rayon;
}
