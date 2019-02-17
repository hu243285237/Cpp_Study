/////////////////////////////////////////////////////
//
//	冒泡排序
//
//	时间复杂度为O(N平方)，两个for循环
//
//	第一遍循环将最大的数排到最后面
//	第二遍循环将第二大的数排到倒数第二的位置
//	以此类推
//	
//	大的数一个一个往上冒，故称冒泡排序
//	
/////////////////////////////////////////////////////

#include<iostream>
#include<vector>

using namespace std;

void main()
{
	vector<int> v = { 9, 2, 24, -3, 4, 11, 0, 5 };

	//排序前
	for (int i : v)	cout << i << ends;

	//换两次行
	cout << endl << endl;

	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = 0; j < v.size() - i - 1; j++)
		{
			if (v[j] > v[j + 1]) swap(v[j], v[j + 1]);
		}
	}

	//排序后
	for (int i : v)	cout << i << ends;

	//防止窗口消失
	getchar();
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}