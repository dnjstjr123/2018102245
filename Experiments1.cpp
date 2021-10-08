#include <iostream>
using namespace std;

int main()
{
	cout << "---구구단 프로그램---" << endl;
	for (int i = 1; i <=8; i++)
	{
		cout << i << "단:" << endl;
		for (int j = 1; j <=9; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
	return 0;
}