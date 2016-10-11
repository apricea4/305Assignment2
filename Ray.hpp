#ifndef RAY_HPP
#define RAY_HPP
#include "Sphere.hpp"
class Ray
{
  Point3D origin;
  Point3D direction;

public:
  Ray(): origin{0,0,0},direction{0,0,0} {};
  Ray(Point3D& origin, Point3D& direction): origin(origin), direction(direction){};
  Point3D& getOrigin();
  Point3D& getDirection();
  void setOrigin(double x, double y, double z);
  void setDirection(double x, double y, double z);
  void checkIntersection(Sphere& s);
  ~Ray();



};
#endif
