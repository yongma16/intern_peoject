#include <iostream>
#include<string>
using namespace std;


//学习多继承和抽象数据类型，依赖接口和实现分离编程
class Intern
{
public:
    string company = "gamescube";
    virtual void Intern_interface();
    Intern()
    {
        cout << "Intern has been created!\n";
    }
    ~Intern()
    {
        cout << "Inter has been destroyed!\n";
    }
private:
    string things = "just beat it!";
    string reason = "my heart is broken！";
    
};


void Intern::Intern_interface()//类外定义函数
{
    cout << "virtual function\n";
}
class People
{
public:
    string name = "fool";
    People()
    {
        cout << "People has been created!\n";
    }
    ~People()
    {
        cout << "People has been destroyed!\n";
    }
private:
    string number = "20200905";
};


class Human:Intern,People{//多继承
public:
    void extends_test(People &p,Intern &i) {
        //继承访问范围测试，只能访问公有成员数据
        cout <<p.name<<endl;
        cout << i.company<<endl;
    }
    string name = "Human";
    Human()
    {
        cout << "created Human!\n";
    }
    ~Human()
    {
        cout << "destroyed human\n";
    }
private:
    string password = "123456789";
};

//模板函数测试，template模板
template <typename T>
void Swapfunction(T& a, T& b)//引用避免拷贝
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}



int main(int argc,char *argv)
{
    string a = "123", b = "456";
    int c = 2, d = 3;
    Swapfunction(a, b);
    Swapfunction(c, d);
    //cout << a << endl;
    //cout << b << endl;
    //cout << c << endl;
    //cout << d << endl;
    //cout << "Hello World!\n";
    return 0;
}


