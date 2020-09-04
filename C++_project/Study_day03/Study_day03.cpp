// Study_day03.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
#include<fstream>
using namespace std;//命名空间，using std::cout;过于麻烦

class Study {
public:
    string name="Study model";
    int x=0, y=0;
    Study(string name,int x, int y)
    {
        this->name = name;
        this->x = x;
        this->y = y;
    }
    Study()
    {
        cout << "Study被创建！" << endl;//构造函数
    }
    ~Study() {
        cout << "Study被销毁！"<<endl;///析构函数
    }
    friend void Study_function(Study &s);//友元函数
    void outside(int x, int y);//外部函数
private:
    int number = 98;
};


void Study_function(Study &s)//友元函数访问私有变量
{
    cout << s.number<< endl;
}

void Study::outside(int x, int y)//在外部定义类中的函数
{
    cout << "类外定义内部函数：" << x << " " << y << endl;
}

int main(int argc,char *crgv)
{
    return 0;
    //文件输入输出的ifstream类型
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
