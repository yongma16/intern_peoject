#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
//���������͸�ֵ����������������������*this�ĳ�Ա����
class Screen {
public:
	typedef string::size_type pos;//����pos���ͣ��ƶ����Ͷ�ȡλ�ã��޷�������
	Screen() {
		cout << "Screen��������!"<<endl;
	};//�޲εĹ��캯��
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht* wd, c) {}//�вι��캯��
	//�ȼ�height=ht;width=wd;contents=c;
	Screen &move(pos r,pos c);//������ⲿ֮������Ϊ��������
	char get() const {
		return contents[cursor];//��ʽ����
	}
	inline char get(pos ht, pos wd) const;//��ʾ����
	~Screen() {
		cout << "Screen��������" << endl;
	}
private:
	pos cursor = 0, height = 0, width = 0;
	string contents;
};
inline Screen &Screen::move(pos r,pos c)//��������
{
	pos row = r * width;
	cursor = row + c;
	return *this;//��ֵ�ķ�ʽ���ض��󣬸������Ϊ���ڴ�ռ��ַ
}
char Screen::get(pos r, pos c) const
{
	pos row = r * width;//�е�λ��
	return contents[row + c];//�е��ַ�
}
int main(int argc, char* argv)
{
	Screen s;//����Screen��
	char ch = s.get();
	ch = s.get(0, 0);
	return 0;
}