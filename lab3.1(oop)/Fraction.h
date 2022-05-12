#pragma once
#include "Pair.h"
class Fraction :
	public Pair
{

public:
	Fraction();
	Fraction(int x, int y);
	Fraction(const Fraction& r);
	~Fraction(void);


	friend Fraction operator + (const Fraction& l, const Fraction& r);
	friend Fraction operator * (const Fraction& l, const int k);
	friend Fraction operator * (const int k, const Fraction& r);
	friend Fraction operator - (const Fraction& l, const Fraction& r);
	friend double operator / (const Fraction& l, const Fraction& r);
	operator string() const;
	friend ostream& operator << (ostream& out, const Fraction& r);
	friend istream& operator >> (istream& in, Fraction& r);
};

