#include <iostream>
#include <string>
using namespace std;

int max(int a, int b) { // �� ���� �Է����� �� ū ���� ������ֱ� ���ؼ� �Լ��� �����
	if ( a > b) 
	return  a;
		if (a < b)
	return  b;
}
int min(int a, int b) { // �� ���� �Է����� �� ���� ���� ������ֱ� ���ؼ� �Լ��� �����.
	if (a > b)
		return b;
	if (a < b)
		return a;

}

int main()
{
	int a;
	int b;
	cout << "�� ���� �Է����ּ��� (����� ����) >>";
	cin >> a;
	cin >> b;

	cout << "ū ��:" << max(a,b) << endl;
	cout << "������ " << min(a, b) << endl;

	
		
}