#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;//命名空间
//-1天的学习记录，
class previous_day{
public:
	string title;//今天的标题学习-1
	string date;//学习日期
	string content;//学习内容
	string summary;//总结
	mutable int changenumber = 10;//可变数据成员
	int outsidedemo();//定义的外部函数不能有主体,否者外部定义调用失败
	friend void readprivate(previous_day p);//访问内部非共有成员变量的友元函数，有问题，声明函数
	int outsidestudycase();
	previous_day() = default;//默认无参的构造函数
	~previous_day() {
		cout << "析构函数销毁对象用" << endl;
	};//析构函数，最后销毁对象时候调用
	previous_day(string title, string date, string content, string summary)
	{
		this->title = title;
		this->date = date;
		this->content = content;
		this->summary = summary;//传入参数
	}
	previous_day& move(string s1, string s2);//在后面设置为内联
private:
	string name="yma16";//人物
};
void readprivate(previous_day p)
{
	cout << "友元函数的调用"<<p.name<<endl;
}
int previous_day::outsidedemo(){
	//定义类外部的函数必须和类内部的声明参数类型一致
	cout <<"class对象\n今天的标题："<< this->title<<"\n日期："<<this->date<<"\n内容："<<this->content<<"\n总结："<<this->summary<<endl;
	return 0;
}
int previous_day::outsidestudycase() {
	unsigned flag1 = 10,flag2 = -10,flag3=0;
	if (flag1)
	{
		cout << "无符号数>0是true"<<endl;
	}
	if (flag2) {
		cout << "无符号数<0也是true"<<endl;
	}
	if (flag3)
	{
		cout << "无符号数0也是true"<<endl;
	}
	else {
		cout << "无符号数=0不是true" << endl;
	}
	cout << sizeof(flag1) << endl;
	cout <<flag3-flag1<<" "<<int(flag3 - flag1)<<endl;
	string s1 = "abcdemo";
	for (auto &word : s1) {//快速转大写
		word = toupper(word);
	}
	cout << s1<<endl;
	int b = 90;
	const int a = 10;//const修饰,不能修改
	const int* p = &a;//const修饰指针可以更改指向
	p = &b;
	cout << *p << endl;
	return 0;
}
inline previous_day& previous_day::move(string s1,string s2)//令成员move为内联函数
{
	summary += s1 + s2;//在总结后添加修改
	return *this;
}

int main()
{
	previous_day *p1=new previous_day("-1天的学习","2020-08-31","学习c++ prime第五版","思考");
	previous_day p2;//有参和无参的构造函数
	p1->move("指针的学习", "友元函数和内联函数的联系");
	p1->outsidedemo();
	p1->outsidestudycase();//类的外部函数调用
	//友元函数测试
	readprivate(p2);
	return 0;
}
