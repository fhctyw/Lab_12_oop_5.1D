#pragma once
#include <string>
#include "RationalException.h"
#include "Pair.h"
using namespace std;

class Rational : public Pair
{
public:
	Rational(int a = 1, int b = 1) throw(RationalException);
	Rational(const Rational& r);
	Rational& operator=(const Rational& r);

	Pair getPair() const { return *this; }
	void setPair(Pair p) throw(int);

	operator string() const;
	friend ostream& operator<<(ostream& out, const Rational& r);
	friend istream& operator>>(istream& in, Rational& r) throw(exception);

	double value() const { return 1. * getA() / getB(); }

	friend Rational operator/(const Rational& r1, const Rational& r2);
	friend bool operator==(const Rational& r1, const Rational& r2);
	friend bool operator<(const Rational& r1, const Rational& r2);
	friend bool operator>(const Rational& r1, const Rational& r2);
private:
	void Reduce();
};
