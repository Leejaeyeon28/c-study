#include  <iostream>
#include  <string> // ���ڿ� ���൵ �����ϰ� ���⵵ �ν��ϰ� �ϰ� �ͱ� ������ string Ŭ���� ����� ����� ����.
using namespace std;
int main()
{
	string name;
	cout << "�̸��� �Է��ϼ���:";
	getline(cin, name);

	string  birth;
	cout << "������ �Է����ּ���:";
	getline(cin, birth);

	string age;
	cout << "���̸� �Է����ּ���:";
	getline(cin, age);

	string major;
	cout << "�Ҽ� �а��� �Է����ּ���:";
	getline(cin, major);

	string hobby;
	cout << "��̸� �Է����ּ���:";
	getline(cin, hobby);

	string live;
	cout << "��� ���� �Է����ּ���:";
	getline(cin, live);

	cout << "=============================================================" << endl;


	cout << "<ȸ������>" << endl;

	string a;
	cout << "�̸�:" << name << endl;

	string b;
	cout << "����:" << birth << endl;

	string c;
	cout << "����:" << age << endl;


	string d;
	cout << "�Ҽ� �а�:" << major << endl;


	string e;
	cout << "���:" << hobby << endl;


	string f;
	cout << "��� ��:" << live << endl;


}
