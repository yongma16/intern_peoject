#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
//内联函数和赋值，拷贝，析构函数，返回*this的成员函数
class Screen {
public:
	typedef string::size_type pos;//声明pos类型，移动光标和读取位置，无符号类型
	Screen() {
		cout << "Screen被创建了!"<<endl;
	};//无参的构造函数
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht* wd, c) {}//有参构造函数
	//等价height=ht;width=wd;contents=c;
	Screen &move(pos r,pos c);//在类的外部之后设置为内联函数
	char get() const {
		return contents[cursor];//隐式内联
	}
	inline char get(pos ht, pos wd) const;//显示内联
	~Screen() {
		cout << "Screen被销毁了" << endl;
	}
private:
	pos cursor = 0, height = 0, width = 0;
	string contents;
};
inline Screen &Screen::move(pos r,pos c)//内联函数
{
	pos row = r * width;
	cursor = row + c;
	return *this;//左值的方式返回对象，个人理解为有内存空间地址
}
char Screen::get(pos r, pos c) const
{
	pos row = r * width;//行的位置
	return contents[row + c];//列的字符
}
int main(int argc, char* argv)
{
	Screen s;//声明Screen类
	char ch = s.get();
	ch = s.get(0, 0);
	return 0;
}