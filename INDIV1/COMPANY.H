#pragma once
#include <iostream>

using namespace std;

struct Product
{
	int plan;
	int fact;
};

class Company {
private:
    int n;
    int n1;
    string name;
    string product;
    Product values[4];
public:
    Company();    // ����������� �� ���������
    Company(int _n, int x = 0);         // ����������� � �����������
    ~Company(); // ����������
    Company(const Company& other);
 
    // ������
    // ����� ��������, ��� � ����������� ���� �� � ����� �� ��������� ���������� ���������� �� ����� � �����������
    bool checkresults() const;
    int summary() const;

    // ����� ��������
    void namecheck();
    void productcheck();

    // ���� ��������
    void newname(string name1);
    void newproduct(string product1);

    // �������� ���������� ���������� �� ����� � ������������
    bool checkstats();
    
    // ���������
    bool operator == (const Company& arr) const;
	bool operator != (const Company& arr) const;
	bool operator>(const Company& arr) const;

    // ���������� ������������� ��������
    Company operator + (const Company& arr);
    Company& operator += (const Company& arr);
      
    friend ostream & operator << (ostream &out, const Company &arr);
    friend istream& operator>>(istream& in, const Company& arr);
};
