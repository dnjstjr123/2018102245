#include <iostream>
using namespace std;

int main()
{
	cout << "2018102245 �ֿ��� ����" << endl;
	cout << "---������ ���α׷�---" << endl;
	for (int i = 1; i <=9; i++)
	{
		cout << i << "��:" << endl;
		for (int j = 1; j <=9; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
	return 0;
}