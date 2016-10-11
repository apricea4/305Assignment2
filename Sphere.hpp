#ifndef SPHERE_HPP
#define SPHERE_HPP
#include "Point3D.hpp"
using namespace std;
class Sphere//: public Point3D
{
    double radius;
    Point3D center;

  public:
    Sphere(): center{0,0,0},radius{0} {};
    Sphere(Point3D &center, double radius): center(center),radius(radius)
    {
      cout<<"made sphere"<<radius<<endl;
    }
    double getRadius();
    Point3D &getCenter();
    void setRadius(double r);
    void setCenter(double x, double y, double z); //TODO: figure out setOrigin method
    ~Sphere(){};
    friend class Ray;







};
#endif
