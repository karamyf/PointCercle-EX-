#include "Point.h"



class Cercle
{
	
	public:
	
	static Cercle Creator();
	static Cercle Creator(Point c, double rayon);

	void Afficher();
	void ChangementRayon(double rayon);
	void Translation(double, double);
	double Surface();
	double Perimetre();
	bool Appartenance(Point);
	bool Comparer(Cercle);
	
private:
	Point c;
	double rayon;	
	Cercle();
	Cercle(Point c, double rayon);
	


};

