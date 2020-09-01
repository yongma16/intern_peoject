// Study_day01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
//#incldue<Sales_data.h>//头文件方式
#include"Sales_data.h"//""是从文件中找，<>从系统里面找
using std::cout;
using std::cin;
using std::endl;
using std::string;//命名空间
//目标学习左值和右值，多继承
class Study_day01 {
public:
    string title,content, date;//标题、名字、内容、日期
    Study_day01() = default;//无参的构造函数
    Study_day01(string title, string content, string date)
    {
        this->content = content;
        this->title = title;
        this->date = date;//传参的构造函数
    }

    ~Study_day01() {//析构函数没有参数
        cout << "Study_day01类被销毁！"<<endl;
    }
private:
    string name = "yma16";
    void private_demo() {
        cout << "私有函数" << endl;
    }
protected:
    string protectedname = "protect";
    void protected_demo() {
        cout << "保护类型的函数";
    }
};

class Study_test {
public:
    string Classname = "测试类";
    Study_test() = default;//默认无参构造函数
    Study_test(string name) {
        this->Classname = name;
    }
    ~Study_test() {
        cout << "Study_test类被销毁!" << endl;
    }
};

class Child_01 :public Study_day01 {//继承Study_day01,继承者1  共有继承
public:
    Child_01() = default;//默认无参的构造函数
    void print_f()
    {
        cout << "测试继承\n标题："<<title<<"\n私有成员：";//访问不了私有成员
    }
};

class Child_02 : Study_day01,Study_test {//继承两个类

};
//const变量
int Study_constexpr() {
    cout << "测试入口" << endl;
    //constexpr变量学习，验证变量是否是一个常量表达式，
    constexpr int mf = 20;//20是一个常量表达式
    constexpr int limit = mf + 1;//mf+1是一个常量表达式
    //constexpr int sz = size();//错误语句除非size式以恶搞constexpr函数
    //常量表达式指的是值不会改变并且编译就能得到结果
    //字面值类型 literal type
    const int max_files = 20;//常量表达式
    int staff_size = 27;//不是常量表达式
    //类型别名 typedef
    typedef const int c;//别名
    //新规定的别名声明
    using d = int;//
    //auto 利用编译器分析表达式所属的类型
    int a = 0;
    short b = 1;
    auto f = a + b;
    //for语句处理单个字符，迭代
    string S_arry = "what a summer day";
    for (auto &s : S_arry) {
        cout << s;
    }
    cout << endl;
    return 0;
}
//类的数据成员
struct Struct_Demo
{
    string name = "结构体测试";
    string arry_s[];
};
int main(int argc,char *argv[])//main函数
{
    int n = 0, i = 42;
    int& r = n;
    cout << r << endl;
    cout << n << endl;
    r = i;
    cout << r << endl;
    cout << &n << endl;//传引用
    //参数
    Study_constexpr();//执行函数
    return 0;
}

