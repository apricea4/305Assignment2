#include <iostream>
using namespace std;
class Point3D
{
	double x;
	double y;
	double z;
	public:
		Point3D(): x{0},y{0},z{0} {}; //uniform initialize



		Point3D(double x, double y, double z)://explicit value constructor
		x(x),y(y),z(z)
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

		~Point3D()
		{
			cout<<"Point3D"<<" "<<x<<" "<<y<<" "<<z<<" "<<"deleted"<<endl;
		}





};
