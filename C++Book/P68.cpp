//////////////////////////////////////////////////
//	求三数之和，用'有默认参数的函数'
//////////////////////////////////////////////////

#include <iostream>

using namespace std;

//有默认参数的函数
int sum(int a = 3, int b = 4, int c = 5)
{
	return a + b + c;
}

int main()
{
	cout << "不给予参数，使用默认参数： " << sum() << endl << endl;
	cout << "使用参数a=6，b=8，c=10： " << sum(6, 8, 10) << endl;
	
	int a;
	cin >> a;

	return 0;
}