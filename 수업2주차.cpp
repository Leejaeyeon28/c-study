#include <iostream>
using namespace std;
int main()
{
	int i, k;//중첩 for문에서 사용하기 위하여 변수선언을 한다.
	for (i = 0; i < 5; i++)//바깥쪽 for문으로 출력하고 싶은 행의 개수만큼 반복한다. 
	{
		for (k = 0; k <= i; k++)// 별은 각 행마다 행의 숫자만큼 찍히고 따라서 아래로 내려갈수록 별의 개수는 증가한다.
			cout << '*';
		cout << endl;//줄을 바꿔준다.
		
	}
	
}



