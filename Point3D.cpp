#include "Point3D.hpp"
//using g++ compiler on linux

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


Point3D& Point3D::addPoints(const Point3D &p)
{
	this->x += p.x;
	this->y += p.y;
	this->z += p.z;
	return (*this);

}

Point3D& Point3D::subtractPoints(const Point3D &p)
{
	this-> -= p.x;
	this-> -= p.y;
	this-> -= p.z;
	return (*this);

}
