#include <iostream>
using namespace std;
class String
{
private:
	char * m_data; //���ڱ����ַ���
	int length;     //�ַ�����Ĵ�С
public:
	// �޲ι��캯��
	String()
	{
		m_data = 0;
		length = 0;
	}
	// �������캯��
	String(const String &s);
	//�����ʼ�����캯��
	String(const char *s);

	// ��������
	~String()
	{
		delete[] m_data;
	}
	//��ӡ�ַ���
	void primsg()
	{
		cout << "�ַ���Ϊ��" << this->m_data << endl;
	}
	// ��ֵ����
	void operator = (const String &s);

	//���Ӻ���ʵ���ַ������
	friend String operator + (const String &s1, const String &s2);

};