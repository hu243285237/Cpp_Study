//////////////////////////////////////////////////////////
//	将数组按相反顺序存放，即第一个元素和最后一个元素互换，
//	以此类推至中间元素为止
//////////////////////////////////////////////////////////

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int myArray[10] = { 3, 5, 7, 8, 12, 31, 52, 64, 24, 10 };

	cout << "原始的数组为：" << endl;
	for each (int i in myArray)
	{
		cout << i << ",";
	}
	cout << endl << endl;

	reverse(myArray, &myArray[10]);

	cout << "交换后的数组为：" << endl;
	for each (int i in myArray)
	{
		cout << i << ",";
	}
	cout << endl;

	int i;
	cin >> i;
	return 0;
}
