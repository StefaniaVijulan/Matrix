#include<iostream>
#pragma once
using namespace std;

class Array{
private:
	int dim;
	int* a;
public:
	Array();
	Array(int m, int vec[]);
	Array(const Array& ob);
	~Array();
	void setvec(int m, int vec[]);
	int getnrel();
	int getvec(int i);
	Array& operator=(const Array& c);
	friend istream& operator>>(istream&, Array&);
	friend ostream& operator<<(ostream&, Array&);
	void afisare();
};

