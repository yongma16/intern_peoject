#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
//��̳е���ϰ����Ԫ��ʹ��
//assertԤ�����
class Screen {
public:
	typedef string::size_type pos;//�ƶ����Ͷ�ȡλ�ã��޷�������
	Screen() = default;//Ĭ���޲εĹ��캯��
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht* wd, c) {}//
	//�ȼ�height=ht;width=wd;contents=c;

private:
	pos cursor = 0, height = 0, width = 0;
	string contents;
};
int main(int argc, char* argv)
{
	Screen s;
	
	return 0;
}