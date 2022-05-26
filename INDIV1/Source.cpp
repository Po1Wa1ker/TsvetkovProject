#include <iostream>
#include "company.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");	
	Company A, B(4, 0), C(4, 3);
	cout << " Нулевые значения = " << B << endl;
	cout << " Значения равные 3 = " << C << endl;
	B.newname("Компания 1");
	B.namecheck();
	C.newproduct("Продукт 1");
	C.productcheck();

	//C.checkresults();
	//B.checkstats();

	system("pause");
	return 0;
}