#include "AA.h"
#include <iostream>
using namespace std;

// TEST21
AA::AA(int v)
{
   a = v;
   cout << "����AA���캯��" <<a<< endl;
}


AA& AA::operator = (const  AA &aa)
{  
	a = aa.a;
	cout << "����AA��ֵ����" << a << endl;
	return *this;
}

AA::~AA()
{
	cout << "����AA��������" << a << endl;
}
