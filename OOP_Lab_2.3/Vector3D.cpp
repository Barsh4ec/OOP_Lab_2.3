#include "Vector3D.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

Vector3D::Vector3D() {
	x = 0;
	y = 0;
	z = 0;
}
Vector3D::Vector3D(int a)
{
	x =	a;
	y = a;
	z = a;
}
Vector3D::Vector3D(const Vector3D& r)
{
	x = r.x;
	y = r.y;
	z = r.z;
}

string Vector3D::ToString() const {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stringstream sout;
	sout << "вектор = (" << x << " , " << y << " , " << z << ")" << endl;
	return sout.str();
}

ostream& operator << (ostream& out, const Vector3D& a)
{
	out << a.x << endl;
	return out;
}
istream& operator >> (istream& in, Vector3D& a)
{
	in >> a.x;
	return in;
}

Vector3D SumOfVectors(Vector3D l, Vector3D r) {
	Vector3D t;
	t.x = l.x + r.x;
	t.y = l.y + r.y;
	t.z = l.z + r.z;
	return t;
}

Vector3D RiznOfVectors(Vector3D l, Vector3D r) {
	Vector3D t;
	t.x = l.x - r.x;
	t.y = l.y - r.y;
	t.z = l.z - r.z;
	return t;
}

double DobOfVectors(Vector3D l, Vector3D r) {
	Vector3D t;
	t.x = l.x * r.x;
	t.y = l.y * r.y;
	t.z = l.z * r.z;
	return t.x + t.y + t.z;
}