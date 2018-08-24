#include "AA.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "xstring.h"
using namespace std;

// _CRT_SECURE_NO_DEPRECATE

/*
  ����VSGit
  @see https://www.cnblogs.com/wangguchangqing/p/6141743.html
 */

void test_01()
{
	AA a(1);      // ��������a
	AA b = AA(2); // ��������b
	a = AA(3);    // ������ʱ���󣬵��ø�ֵ����,��ʱ�������� ������->��ֵ->������
	
	cout << "=====test_01 End========" << endl;
}

void test_02()
{
	AA a(0);
	for (int i = 1; i < 5; i++)
	{
		a = AA(i); // AA(i)����ʱ����ʹ�ý������ͷ�
	}

	cout << "=====test_01 End========" << endl;
}

/*
 ����string�Ŀ�������͸�ֵ����
 @see https://blog.csdn.net/xld_hung/article/details/76397668
*/
void test_03()
{
	string s1 = "robbin";
	string s2 = s1;     // string��ֵ���㣬��ȿ���
	string s3(s2);      // string�������죬��ȿ���
	string s4 = s1 + s2; // string�Ӻ����㣬��ȿ���
	s4.insert(0, "CC");
	s4.append("CC");

	s2[0] = 'A';
	cout << "s1:" << s1.c_str() << endl;
	cout << "s2:" <<s2.c_str()<< endl;
	cout << "s3:" << s3.c_str() << endl;
	cout << "s4:" << s4.c_str() << endl;
}

void test_04()
{
	String s1("hello");
	s1.primsg();
	String s2 = s1;
	s2.primsg();
	String s3(" world");
	s3.primsg();
	String s4 = s1 + s3;
	s4.primsg();
}

int main()
{

	test_04();

	system("pause");
	return 0;
}