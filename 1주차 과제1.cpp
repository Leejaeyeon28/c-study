#include  <iostream>
#include  <string> // 문자열 제약도 없게하고 띄어쓰기도 인식하게 하고 싶기 때문에 string 클래식 방식을 사용할 것임.
using namespace std;
int main()
{
	string name;
	cout << "이름을 입력하세요:";
	getline(cin, name);

	string  birth;
	cout << "생일을 입력해주세요:";
	getline(cin, birth);

	string age;
	cout << "나이를 입력해주세요:";
	getline(cin, age);

	string major;
	cout << "소속 학과를 입력해주세요:";
	getline(cin, major);

	string hobby;
	cout << "취미를 입력해주세요:";
	getline(cin, hobby);

	string live;
	cout << "사는 곳을 입력해주세요:";
	getline(cin, live);

	cout << "=============================================================" << endl;


	cout << "<회원정보>" << endl;

	string a;
	cout << "이름:" << name << endl;

	string b;
	cout << "생일:" << birth << endl;

	string c;
	cout << "나이:" << age << endl;


	string d;
	cout << "소속 학과:" << major << endl;


	string e;
	cout << "취미:" << hobby << endl;


	string f;
	cout << "사는 곳:" << live << endl;


}
