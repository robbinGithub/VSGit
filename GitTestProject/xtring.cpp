#include "xString.h"
//���ַ����ĳ���
int xstrlen(const char *arr)
{   
	int i;
	for (i = 0; arr[i] != '\0'; i++)
	{
	}
	return i;
}
//�ַ�������
char * xstrcpy(char *des, const char *src)
{
	char *tmp = des;
	while ((*des++ = *src++) != '\0');
	return tmp;
}
//�Է������Ӻ���
char *xstrcat(char *des, const char *src)
{
	char *tmp = des;
	int lenth = xstrlen(des);
	while (*src != '\0')
	{
		*(des + lenth) = *(src);
		src++;
		des++;
	}
	*(des + lenth) = *(src);
	return tmp;
}

//ʵ�ֿ������캯��
String::String(const String &s)
{
	length = s.length;
	if (s.m_data)
	{
		m_data = new char[length + 1];
		xstrcpy(m_data, s.m_data);
	}
	else
		m_data = 0;
}
//���캯��
String::String(const char *s)
{
	length = xstrlen(s);
	m_data = new char[length + 1];
	xstrcpy(m_data, s);
}
//=����
void String::operator = (const String &s)
{
	if (m_data)  delete[] m_data;
	length = s.length;
	if (s.m_data)
	{
		m_data = new char[length + 1];
		xstrcpy(m_data, s.m_data);
	}
	else
		m_data = 0;
}

//+����
String operator + (const String &s1, const String &s2)
{
	String tmp;
	tmp.length = s1.length + s2.length;
	tmp.m_data = new char[tmp.length + 1];
	xstrcpy(tmp.m_data, s1.m_data);
	xstrcat(tmp.m_data, s2.m_data);
	return tmp;
}