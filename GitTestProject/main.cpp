#include "AA.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

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

int main()
{

	test_01();

	system("pause");
	return 0;
}