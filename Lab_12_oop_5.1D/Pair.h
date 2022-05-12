#pragma once
#include <iostream>
using namespace std;

class Pair {
	int a, b;
public:
	Pair(int a = 0, int b = 0);
	Pair(const Pair&);
	Pair& operator=(const Pair&);

	int getA() const { return a; };
	void setA(int a) { this->a = a; };
	int getB() const { return b; };
	void setB(int b) { this->b = b; };

	operator string() const;
	friend ostream& operator<<(ostream& out, const Pair&);
	friend istream& operator>>(istream& out, Pair&);
	friend bool operator>(const Pair& p1, const Pair p2);
};
