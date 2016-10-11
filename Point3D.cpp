#include "Point3D.hpp"
using namespace std;
//using g++ compiler on linux used makefile

double Point3D::getX()
{
	return this->x;

}
double Point3D::getY()
{
	return this->y;

}
double Point3D::getZ()
{
	return this->z;

}

void Point3D::setX(double x)
{
	this->x =x;
	return;

}
void Point3D::setY(double y)
{
	this->y = y;
	return;

}

void Point3D::setZ(double z)
{
	this->z = z;
	return;

}

Point3D& Point3D::addPoints(const Point3D &p)
{
	this->x += p.x;
	this->y += p.y;
	this->z += p.z;
	return (*this);

}

Point3D& Point3D::subtractPoints(const Point3D &p)//TODO: check the assignment for specs on this function
{

	double xx = this->x;
	double yy = this->y;
	double zz = this->z;
	xx -= p.x;
	yy -= p.y;
	zz -= p.z;
	//this->x -= p.x;
	//p.x -= this->x;
	//this->y -= p.y;
	//p.y -= this->y;
	//this->z -= p.z;
	//p.z -= this->z;
	Point3D *ret = new Point3D(xx,yy,zz);
	return (*ret);

}

double Point3D::multiplyPoints(const Point3D &p)
{
	return (this->x)*(p.x) + (this->y)*(p.y) + (this->z)*(p.z);

}

double Point3D::squarePoints()
{
	return pow((this->x),2) + pow((this->y),2) + pow((this->z),2);



}




void Point3D::printPoints()
{
	cout<<this->getX()<<" "<<this->getY()<<" "<<this->getZ()<<endl;
	return;

}
