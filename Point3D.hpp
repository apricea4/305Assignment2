//using c++ compiler linux  used makefile
#ifndef POINT3D_HPP
#define POINT3D_HPP
#include <iostream>
#include <cmath>
using namespace std;
class Point3D
{
		double x;
		double y;
		double z;
	public:
		Point3D(): x{0},y{0},z{0} {}; //uniform initialize



		Point3D(double x, double y, double z): x(x),y(y),z(z) //explicit value constructor
		{
			cout<<"made point: "<<x<<y<<z<<endl;

		}
		double getX();

		double getY();

		double getZ();

		void setX(double x);
		void setY(double y);
		void setZ(double z);
		Point3D &addPoints(const Point3D &p);
		Point3D &subtractPoints(const Point3D &p);
		double multiplyPoints(const Point3D &p);
		double squarePoints();
		void printPoints();

		~Point3D()
		{
			cout<<"Point3D"<<" "<<x<<" "<<y<<" "<<z<<" "<<"deleted"<<endl;
		}





};
#endif
