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
    Company();    // конструктор по умолчанию
    Company(int _n, int x = 0);         // конструктор с параметрами
    ~Company(); // деструктор
    Company(const Company& other);
 
    // методы
    // метод проверки, что у предпри€ти€ хот€ бы в одном из кварталов отличаетс€ количество по плану и фактическое
    bool checkresults() const;
    int summary() const;

    // ¬ывод значений
    void namecheck();
    void productcheck();

    // ¬вод значений
    void newname(string name1);
    void newproduct(string product1);

    // ѕроверка суммарного количества по плану и фактического
    bool checkstats();
    
    // —равнени€
    bool operator == (const Company& arr) const;
	bool operator != (const Company& arr) const;
	bool operator>(const Company& arr) const;

    // –еализаци€ перегруженных операций
    Company operator + (const Company& arr);
    Company& operator += (const Company& arr);
      
    friend ostream & operator << (ostream &out, const Company &arr);
    friend istream& operator>>(istream& in, const Company& arr);
};
