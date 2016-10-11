#include "Ray.hpp"
#include <cmath>
#include <iostream>
using namespace std;
Point3D& Ray::getOrigin()
{
  return this->origin;

}

Point3D& Ray::getDirection()
{
  return this->direction;

}
void Ray::setOrigin(double x, double y, double z)
{
  this->origin.setX(x);
  this->origin.setY(y);
  this->origin.setZ(z);
  return;
}
void Ray::setDirection(double x, double y, double z)
{
  this->direction.setX(x);
  this->direction.setY(y);
  this->direction.setZ(z);
  return;
}


void Ray::checkIntersection(Sphere& s)//TODO: this function isnt working as expected, look into point3d's functions
{
  double A = this->direction.squarePoints();
  cout<<"A: "<<A<<endl;
  //Point3D &b = this->origin.subtractPoints(s.center);
  Point3D &b = s.center.subtractPoints(this->origin);
  b.printPoints();
  double B = this->direction.multiplyPoints(b);
  cout<<"B: "<<B<<endl;
  //Point3D &c = this->origin.subtractPoints(s.center);
  cout<<"center"<<endl;
  s.center.printPoints();
  Point3D &c = s.center.subtractPoints(this->origin);
  c.printPoints();
  double C = c.squarePoints();
  double R = pow(s.radius,2);
  C -= R;

  double answer = ((pow(B,2))) - (A*C);
  if(answer < 0)
  {
    std::cout<<"answer is: "<<answer<<std::endl;
    std::cout<<"less than zero, doesnt intersect"<<std::endl;
    return;
  }
  std::cout<<"greater than zero, intersects"<<std::endl;
  return;

}
