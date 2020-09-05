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
    void People::Intern_function() {

    }
    string name = "Human";
    
private:
    string password = "123456789";
};


int main(int argc,char *argv)
{
    cout << "Hello World!\n";
    return 0;
}

