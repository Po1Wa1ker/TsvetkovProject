#include <cmath>
#include <iostream>
#include "company.h"

using namespace std;

Company::Company()
{
	n = 0;
	values[n] = {0};
	name = "";
	product = "";
}

Company::Company(int _n, int x)
{
	n = _n;
	for (int i = 0; i < n; ++i)
		{ 
		values[i].fact = x;
		values[i].plan = x;
		}
}

Company::~Company()
{
	delete[] values;
}

Company::Company(const Company& other)
{
	n = other.n;
	for (int i = 0; i < n; ++i)
	{
		values[i].fact = other.values[i].fact;
		values[i].plan = other.values[i].plan;
	}
}

bool Company::checkresults() const
{
	for (int i = 0; i < n; i++) {
		//for (int j = 1; j <n1; j++)
		if (values[i].fact != values[i].plan) return false;
	}
	return true;
}

int Company::summary() const
{
	int s = 0;
	for (int i = 0; i < n; i++) {
		s = s + values[i].fact;
	}
	return s;
}

void Company::namecheck()
{
	cout << "Имя компании: " << name << endl;
}

void Company::productcheck()
{
	cout << "Имя продукции: " << product << endl;
}

void Company::newname(string name1)
{
	name = name1;
}

void Company::newproduct(string product1)
{
	product = product1;
}

bool Company::checkstats()
{
	int s1 = 0;
	int s2 = 0;
	for (int i = 0; i < n; i++) {
		s1 = s1 + values[i].fact;
		s2 = s2 + values[i].plan;
	}
	return s1 == s2;
}

bool Company::operator==(const Company& arr) const
{
	for (int i = 0; i < n; i++)	
		if (values[i].fact != arr.values[i].fact && values[i].plan != arr.values[i].plan) return false;
	return true;
}

bool Company::operator!=(const Company& arr) const
{
	for (int i = 0; i < n; i++)
		if (values[i].fact != arr.values[i].fact && values[i].plan != arr.values[i].plan) return true;
	return false;
}

bool Company::operator>(const Company& arr) const
{
	for (int i = 0; i < n; i++) {
			if (values[i].fact != arr.values[i].fact) {
				if (values[i].fact > arr.values[i].fact) {
					return true;
				}
				else
					return false;
			}
	}
	return false;
}




Company Company::operator+(const Company& arr)
{
	if (n != arr.n && n1 != arr.n1) throw "Разные размерности";
	Company a(n, n1);
	for (int i = 0; i < n; ++i) {
		{
			a.values[i].plan = values[i].plan + arr.values[i].plan;
		}
	}
	return a;
}

Company& Company::operator+=(const Company& arr)
{
	*this = *this + arr;
	return *this;
}

ostream& operator<<(ostream& out, const Company& arr)
{
	for (int i = 0; i < arr.n - 1; ++i) {
		//for (int j = 0; j < arr.n1 - 1; ++j) {
			out << arr.values[i].fact << ", " << arr.values[i].plan << endl;
	}

	//if (arr.n > 0)	out << arr.values[arr.n - 1][arr.n1 - 1] << endl;
	//else out << " - " << endl;
	return out;
}

istream& operator>>(istream& in, const Company& arr)
{
	for (int i = 0; i < arr.n; ++i) {
		in >> arr.values[i].fact >> arr.values[i].plan;
	}
	return in;
}