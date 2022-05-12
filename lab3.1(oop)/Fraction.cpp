#include "Fraction.h"
#include <sstream>

Fraction::Fraction()
{
	setA(0);
	setB(0);
}

Fraction::Fraction( int x, int y)
{
	setA(x);
	setB(y);
}

Fraction::Fraction(const Fraction& r)
{
	*this = r;
}

Fraction::~Fraction(void)
{}

Fraction operator + (const Fraction& l, const Fraction& r)
{
	Fraction t;
	int a = l.getA() + r.getA();
	int b = l.getB() + r.getB();
	
	t.setA(a);
	t.setB(b);
	return t;
}
Fraction operator * (const Fraction& l, const int k)
{
	Fraction t;
	int a = l.getA() * k;
	int b = l.getB() * k;

	t.setA(a);
	t.setB(b);
	return t;
}
Fraction operator * (const int k, const Fraction& r)
{
	Fraction t;
	int a = r.getA() * k;
	int b = r.getB() * k;

	t.setA(a);
	t.setB(b);
	return t;
}
Fraction operator - (const Fraction& l, const Fraction& r)
{
	Fraction t;
	int a = l.getA() - r.getA();
	int b = l.getB() - r.getB();

	t.setA(a);
	t.setB(b);
	return t;
}
double operator / (const Fraction& l, const Fraction& r)
{
	double z1 = l.getA() + 0.01 * l.getB();
	double z2 = r.getA() + 0.01 * r.getB();
	return z1 / z2;
}

Fraction::operator string() const
{
	stringstream ss;
	ss << getA() << "," << getB() << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Fraction& r)
{
	return out << (string)r;
}
istream& operator >> (istream& in, Fraction& r)
{
	int a, b;
	cout << "Ціла частина"; in >> a;
	cout << "Дробова частина"; in >> b;
	r.setA(a); r.setB(b);
	return in;
}
