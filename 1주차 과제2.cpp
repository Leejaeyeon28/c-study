#include  <iostream>
using namespace std;
int main()
{
	int num1, num2;

	cout << "first number:";
	cin >> num1;
	cout << "seocond number:";
	cin >> num2;

	cout << "<계산 결과>" << endl;
	cout << num1 << '+' << num2 << '=' << num1 + num2 << endl;
	cout << num1 << '-' << num2 << '=' << num1 - num2 << endl;
	cout << num1 << '*' << num2<< '=' << num1 * num2 << endl;
	cout << num1 << '/' << num2 << '=' << num1 /(float) num2 << endl; // num1과 num2는 둘다 정수이므로 두개의 사칙연산은 무조건 정수가 나오기 때문에 나누기를 실수의 몫으로 나오게 하기 위해 둘 중 하나를 잠시 실수의 상태로 바꿨다.
}