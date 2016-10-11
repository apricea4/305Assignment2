#include "Sphere.hpp"

double Sphere::getRadius()
{
  return this->radius;


}

Point3D& Sphere::getCenter()
{
  //Point3D p = (this->origin);
  //p.printPoints();
  return this->center; //returning a reference to the Point3D object origin

}

void Sphere::setCenter(double x, double y, double z)//TODO: figure out whether & or * or nothing
{
  this->center.setX(x);
  this->center.setY(y);
  this->center.setZ(z);
  return;

}
