#include "Point3D.hpp"
#include <iostream>
using namespace std;
int main()
{
	Point3D *point1 = new Point3D(3,6,4);
	cout<<point1->getX()<<endl;
	point1->setX(5);
	cout<<point1->getX()<<endl;
	Point3D *point2 = new Point3D(1,2,3);
	point2->addPoints(*point1);
	cout<<point2->getX()<<" "<<point2->getY()<<" "<<point2->getZ()<<"after adding"<<endl;
	delete point1;
	delete point2;
	return 0;

}
