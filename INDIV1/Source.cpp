#include <iostream>
#include "company.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");	
	Company A, B(4, 0), C(4, 3);
	cout << " ������� �������� = " << B << endl;
	cout << " �������� ������ 3 = " << C << endl;
	B.newname("�������� 1");
	B.namecheck();
	C.newproduct("������� 1");
	C.productcheck();

	//C.checkresults();
	//B.checkstats();

	system("pause");
	return 0;
}