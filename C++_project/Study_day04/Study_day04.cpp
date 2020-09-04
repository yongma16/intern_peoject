#include<iostream>
#include<string>
#include<math.h>
using namespace std;
//今日学习友元类和友元函数的使用访问非共有数据

//友元类的基类
class People {
public:
	friend class Intern;//Intern作为友元类，友元类和友元函数都能访问它的非共有成员
	friend void friendP(People *p);
	People()
	{
		cout << "people has been created!\n";
	}
	~People()
	{
		cout << "people has been destroyed!\n";
	}
	string pub = "公有数据";
protected:
	string password = "123";
private:
	string id = "20200904";
	void P_printf()
	{
		cout << "访问私有函数\n";
	}
};

//友元函数测试
void friendP(People *p)
{
	cout << "通过友元函数方位非公有数据\n密码："<<p->password <<"访问id："<< p->id << endl;//访问私有数据和保护数据
}

//友元类测试
class Intern {
public:
	string company = "gamescube";//先编译类的成员变量再编译类的成员函数
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
		cout << "通过友元类访问非公有数据\n密码：" << p->password<<"访问id："<<p->id<<endl;
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
	Intern *I1=new Intern();//初始化类
	People p1;//以初始化
	friendP(&p1);//友元函数访问私有数据
	I1->visit_Friend_People(&p1);//友元类访问非共有数据
	//负数的无符号数为其补码（计算机补码的方式显示）
	//int a = -3;
	////int b = 6;
	//cout <<"a的地址"<< &a << endl;
	//printf("a占字节数：%d\n", sizeof(a));
	//printf("a的无符号数=%u\n", a);
	return 0;
}