#include <iostream>
using namespace std;

int main()
{
	cout << "2018102245 최원석 과제" << endl;
	cout << "---구구단 프로그램---" << endl;
	for (int i = 1; i <=9; i++)
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