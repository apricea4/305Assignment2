#include "Point3D.hpp"
#include "Sphere.hpp"
#include "Ray.hpp"
#include <iostream>
using namespace std;
int main()
{

	/*Point3D *point1 = new Point3D(3,6,4);

	Point3D *point2 = new Point3D(1,2,3);
	//point2->subtractPoints(*point1);
	//point2->printPoints();
	Sphere *sp = new Sphere(*point1, 5);
	Point3D *p = new Point3D(sp->getOrigin());
	sp->setOrigin(1,4,3);
	sp->getOrigin().printPoints();
	//p->printPoints();
	//double x = point1->squarePoints();
	//cout<<x<<endl;
	delete point1;
	delete point2;
	*/
	Point3D *test = new Point3D(10, -2,-5);
	Sphere *testS = new Sphere(*test, 10);
	Point3D *rayOrg = new Point3D(0,2,5);
	Point3D *rayDir = new Point3D(1,0,-2);
	Ray *testRay = new Ray(*rayOrg, *rayDir);
	testRay->checkIntersection(*testS);
	return 0;

}
