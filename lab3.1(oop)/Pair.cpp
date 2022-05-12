#include "Pair.h"
#include <sstream>

Pair::Pair()
{
	a = 0; 
	b = 0;
}
Pair::Pair(int x, int y)
{
	a = x;
	b = y;
}
Pair::Pair(const Pair& r)
{
	a = r.a;
	b = r.b;
}
Pair::~Pair(void)
{}
Pair operator + (const Pair& l, const Pair& r)
{
	Pair t;
	t.a = l.a + r.a;
	t.b = l.b + r.b;
	return t;
}
Pair operator * (const Pair& l, const int k)
{
	Pair t;
	t.a = l.a * k;
	t.b = l.b * k;
	return t;
}
Pair operator * (const int k, const Pair& r)
{
	Pair t;
	t.a = r.a * k;
	t.b = r.b * k;
	return t;
}
Pair::operator string() const 
{   stringstream ss;
	ss << "( " << getA() << ", " << getB() << " )";
	return ss.str();
}
ostream& operator << (ostream& out, const Pair& r)
{
	return out <<(string)r;
}
istream& operator >> (istream& in, Pair& r)
{
	int a, b;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;

	r.setA(a);
	r.setB(b);
	return in;
}
