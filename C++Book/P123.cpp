//////////////////////////////////////////////////////////
//	将数组按相反顺序存放，即第一个元素和最后一个元素互换，
//	以此类推至中间元素为止
//////////////////////////////////////////////////////////

//2018.6.24 19:26 还有问题

#include <iostream>

using namespace std;

//得到数组长度函数
template <class T>
int getLength(T& array)
{
	return (sizeof(array) / sizeof(array[0]));
}

//交换
void MyReverse(int *array)
{
	int *p, temp, *i, *j, m = (getLength(array) - 1) / 2;

	i = array; j = array + getLength(array) - 1; p = array + m;

	for (; i <= p; i++,j--)
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}
}

int main()
{
	int myArray[10] = { 3, 5, 7, 8, 12, 31, 52, 64, 24, 10 };

	cout << "原始的数组为：" << endl;
	for each (int i in myArray)
	{
		cout << i << ",";//不能直接用i+","
	}
	cout << endl << endl;

	MyReverse(myArray);

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