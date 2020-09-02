#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
//多继承的练习和友元的使用
//assert预处理宏
class Screen {
public:
	typedef string::size_type pos;//移动光标和读取位置，无符号类型
	Screen() = default;//默认无参的构造函数
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht* wd, c) {}//
	//等价height=ht;width=wd;contents=c;

private:
	pos cursor = 0, height = 0, width = 0;
	string contents;
};
int main(int argc, char* argv)
{
	Screen s;
	
	return 0;
}