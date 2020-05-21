#include <iostream>
#include <string>
using namespace std;

int max(int a, int b) { // 두 수를 입력했을 때 큰 수를 출력해주기 위해서 함수를 만든다
	if ( a > b) 
	return  a;
		if (a < b)
	return  b;
}
int min(int a, int b) { // 두 수를 입력했을 때 작은 수를 출력해주기 위해서 함수를 만든다.
	if (a > b)
		return b;
	if (a < b)
		return a;

}

int main()
{
	int a;
	int b;
	cout << "두 수를 입력해주세요 (띄어쓰기로 구분) >>";
	cin >> a;
	cin >> b;

	cout << "큰 수:" << max(a,b) << endl;
	cout << "작은수 " << min(a, b) << endl;

	
		
}