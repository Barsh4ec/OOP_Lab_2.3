#pragma once
#include <string>
using namespace std;

class Vector3D
{
private:
	double x, y, z;
public:
	double GetX() const { return x; }
	double GetY() const { return y; }
	double GetZ() const { return z; }
	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }
	void SetZ(double value) { z = value; }

	Vector3D();
	Vector3D(int);
	Vector3D(const Vector3D&);

	friend ostream& operator << (ostream&, const Vector3D&);
	friend istream& operator >> (istream&, Vector3D&);

	string ToString() const;

	friend Vector3D SumOfVectors(Vector3D l, Vector3D r);
	friend Vector3D RiznOfVectors(Vector3D l, Vector3D r);
	friend double DobOfVectors(Vector3D l, Vector3D r);
};