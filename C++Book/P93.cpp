//////////////////////////////////////////////////////////
//	斐波那契数列 fibonacci 黄金分割 1.1.2.3.5.8.13.21.34
//////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i;
	int f[20] = { 1, 1 };

	for (i = 2; i < 20; i++)
	{
		//前两数之和等于第三个数
		f[i] = f[i - 2] + f[i - 1];
	}

	for (i = 0; i < 20; i++)
	{
		cout << f[i] << endl;
	}

	cin >> i;
}