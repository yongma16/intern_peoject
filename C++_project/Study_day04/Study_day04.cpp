#include<iostream>
#include<string>
#include<math.h>
using namespace std;
//����ѧϰ��Ԫ�����Ԫ������ʹ�÷��ʷǹ�������

//��Ԫ��Ļ���
class People {
public:
	friend class Intern;//Intern��Ϊ��Ԫ�࣬��Ԫ�����Ԫ�������ܷ������ķǹ��г�Ա
	friend void friendP(People *p);
	People()
	{
		cout << "people has been created!\n";
	}
	~People()
	{
		cout << "people has been destroyed!\n";
	}
	string pub = "��������";
protected:
	string password = "123";
private:
	string id = "20200904";
	void P_printf()
	{
		cout << "����˽�к���\n";
	}
};

//��Ԫ��������
void friendP(People *p)
{
	cout << "ͨ����Ԫ������λ�ǹ�������\n���룺"<<p->password <<"����id��"<< p->id << endl;//����˽�����ݺͱ�������
}

//��Ԫ�����
class Intern {
public:
	string company = "gamescube";//�ȱ�����ĳ�Ա�����ٱ�����ĳ�Ա����
	Intern()
	{
		cout << "Intern has been created!\n";
	}
	~Intern()
	{
		cout << "Intern has been destroyed!\n";
	}
	void visit_Friend_People(People *p)
	{
		cout << "ͨ����Ԫ����ʷǹ�������\n���룺" << p->password<<"����id��"<<p->id<<endl;
	}
private:
	int day_time = 5;
};
int main(int argc, char* argv)
{
	Intern* I;
	Intern* p;
	cout << I << " " << &I << endl;
	cout << p<<" "<<&p<<endl;
	Intern *I1=new Intern();//��ʼ����
	People p1;//�Գ�ʼ��
	friendP(&p1);//��Ԫ��������˽������
	I1->visit_Friend_People(&p1);//��Ԫ����ʷǹ�������
	//�������޷�����Ϊ�䲹�루���������ķ�ʽ��ʾ��
	//int a = -3;
	////int b = 6;
	//cout <<"a�ĵ�ַ"<< &a << endl;
	//printf("aռ�ֽ�����%d\n", sizeof(a));
	//printf("a���޷�����=%u\n", a);
	return 0;
}