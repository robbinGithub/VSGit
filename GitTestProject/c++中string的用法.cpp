#include<iostream>
#include"string"
#include"algorithm"
using namespace std;

//string�ĸ�ֵ
void f1()
{
	string s1 = "shihao";        //string��һ����
	string s2("bbbbbb");
	string s3 = s1;
	string s4(10, 'a');     //�ȼ���string s4 ="aaaaaaaaaa";
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
}

//string�ı���
void f2()
{
	string s1 = "abcdefg";

	//1:���鷽ʽ
	for (int i = 0; i < s1.length(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;

	//2:������
	for (string::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//3  �쳣����
	try
	{
		for (int i = 0; i < s1.length() + 3; i++)
		{
			cout << s1.at(i) << " ";   //�����ִ���ʱ�� �������׳��쳣
		}
	}
	catch (...)
	{
		cout << "�����쳣" << endl;
	}

	try
	{
		for (int i = 0; i < s1.length() + 3; i++)   //���ִ���, �������׳��쳣
		{
			cout << s1[i] << " ";
		}
	}
	catch (...)
	{
		cout << "�����쳣" << endl;
	}
}

//�ַ�ָ���sting��ת��
void f4()
{
	//1:
	string s1 = "aaabbb";
	cout << s1.c_str() << endl;

	//2:
	char buf[128] = { 0 };
	// s1.copy(buf, 3, 1);    //����3���ַ�����1���ַ���ʼ(λ���±��0��ʼ)    //ע�������Զ������ַ���������־
	cout << "buf: " << buf << endl;
}

//�ַ���������
void f5()
{
	//1:
	string s1 = "aaa";
	string s2 = "bbb";
	s1 = s1 + s2;
	cout << "s1: " << s1 << endl;

	//2:
	string s3 = "333";
	string s4 = "444";
	s3.append(s4);
	cout << "s3: " << s3 << endl;
}

//�ַ����Ĳ��Һ��滻
void f6()
{
	string s1 = "wbm hello wbm 111 wbm 222 wbm 333";

	//���� �Ӳ���λ�ÿ�ʼ��һ�����ֵ��±�
	int index = s1.find("wbm", 1);  //λ���±��0��ʼ
	cout << "index: " << index << endl << endl;

	//����ÿһ��wbm���ֵ��±�
	int offindex = s1.find("wbm", 0);
	while (offindex != string::npos)   //������-1
	{
		cout << "offindex: " << offindex << endl;
		offindex++;
		offindex = s1.find("wbm", offindex);
	}

	//�����е�wbm���ɴ�д
	offindex = s1.find("wbm", 0);
	while (offindex != string::npos)   //������-1
	{
		s1.replace(offindex, 3, "WBM");
		offindex++;
		offindex = s1.find("wbm", offindex);
	}
	cout << endl << "s1�滻��Ľ��Ϊ�� " << s1 << endl;

	//��aaa�滻�ɴ�д
	string s2 = "aaa bbb ccc";
	s2.replace(0, 3, "AAA");    //�ӵ�0��λ�ÿ�ʼ�滻3��
	cout << endl << "s2: " << s2 << endl;
}

//����ɾ���Ͳ���
void f7()
{
	string s1 = "hello1 hello2 hello1";
	string::iterator it = find(s1.begin(), s1.end(), 'l');
	if (it != s1.end())
	{
		s1.erase(it);   //ɾ��
	}
	cout << "s1ɾ��l�Ժ�Ľ��Ϊ��" << s1 << endl;

	s1.erase(s1.begin(), s1.end());
	cout << "s1ȫ��ɾ����" << s1 << endl;
	cout << "s1�ĳ���Ϊ: " << s1.length() << endl;

	//����
	string s2 = "BBB";
	s2.insert(0, "AAA");
	cout << "s2: " << s2 << endl;
}

//��Сдת��
void f8()
{
	string s1 = "AAAbbb";
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);       //transform(first,last,result,op);
	cout << "s1ȫ��ת��ΪСдΪ: " << s1 << endl;
	transform(s1.begin(), s1.end(), s1.begin(), ::toupper);       //transform(first,last,result,op);
	cout << "s1ȫ��ת��Ϊ��дΪ: " << s1 << endl;
}

int main_041()
{
	f7();
	system("pause");
	return 0;
}