#include  <iostream>
using namespace std;
int main()
{
	int num1, num2;

	cout << "first number:";
	cin >> num1;
	cout << "seocond number:";
	cin >> num2;

	cout << "<��� ���>" << endl;
	cout << num1 << '+' << num2 << '=' << num1 + num2 << endl;
	cout << num1 << '-' << num2 << '=' << num1 - num2 << endl;
	cout << num1 << '*' << num2<< '=' << num1 * num2 << endl;
	cout << num1 << '/' << num2 << '=' << num1 /(float) num2 << endl; // num1�� num2�� �Ѵ� �����̹Ƿ� �ΰ��� ��Ģ������ ������ ������ ������ ������ �����⸦ �Ǽ��� ������ ������ �ϱ� ���� �� �� �ϳ��� ��� �Ǽ��� ���·� �ٲ��.
}