#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;//�����ռ�
//-1���ѧϰ��¼��
class previous_day{
public:
	string title;//����ı���ѧϰ-1
	string date;//ѧϰ����
	string content;//ѧϰ����
	string summary;//�ܽ�
	mutable int changenumber = 10;//�ɱ����ݳ�Ա
	int outsidedemo();//������ⲿ��������������,�����ⲿ�������ʧ��
	friend void readprivate(previous_day p);//�����ڲ��ǹ��г�Ա��������Ԫ�����������⣬��������
	int outsidestudycase();
	previous_day() = default;//Ĭ���޲εĹ��캯��
	~previous_day() {
		cout << "�����������ٶ�����" << endl;
	};//����������������ٶ���ʱ�����
	previous_day(string title, string date, string content, string summary)
	{
		this->title = title;
		this->date = date;
		this->content = content;
		this->summary = summary;//�������
	}
	previous_day& move(string s1, string s2);//�ں�������Ϊ����
private:
	string name="yma16";//����
};
void readprivate(previous_day p)
{
	cout << "��Ԫ�����ĵ���"<<p.name<<endl;
}
int previous_day::outsidedemo(){
	//�������ⲿ�ĺ�����������ڲ���������������һ��
	cout <<"class����\n����ı��⣺"<< this->title<<"\n���ڣ�"<<this->date<<"\n���ݣ�"<<this->content<<"\n�ܽ᣺"<<this->summary<<endl;
	return 0;
}
int previous_day::outsidestudycase() {
	unsigned flag1 = 10,flag2 = -10,flag3=0;
	if (flag1)
	{
		cout << "�޷�����>0��true"<<endl;
	}
	if (flag2) {
		cout << "�޷�����<0Ҳ��true"<<endl;
	}
	if (flag3)
	{
		cout << "�޷�����0Ҳ��true"<<endl;
	}
	else {
		cout << "�޷�����=0����true" << endl;
	}
	cout << sizeof(flag1) << endl;
	cout <<flag3-flag1<<" "<<int(flag3 - flag1)<<endl;
	string s1 = "abcdemo";
	for (auto &word : s1) {//����ת��д
		word = toupper(word);
	}
	cout << s1<<endl;
	int b = 90;
	const int a = 10;//const����,�����޸�
	const int* p = &a;//const����ָ����Ը���ָ��
	p = &b;
	cout << *p << endl;
	return 0;
}
inline previous_day& previous_day::move(string s1,string s2)//���ԱmoveΪ��������
{
	summary += s1 + s2;//���ܽ������޸�
	return *this;
}

int main()
{
	previous_day *p1=new previous_day("-1���ѧϰ","2020-08-31","ѧϰc++ prime�����","˼��");
	previous_day p2;//�вκ��޲εĹ��캯��
	p1->move("ָ���ѧϰ", "��Ԫ������������������ϵ");
	p1->outsidedemo();
	p1->outsidestudycase();//����ⲿ��������
	//��Ԫ��������
	readprivate(p2);
	return 0;
}
