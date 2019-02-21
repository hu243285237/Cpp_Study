////////////////////////////////////////////////////////////
//
//	快速排序
//
//	是冒泡排序的改进版
//
//	最差时间复杂度为O(N平方)
//	平均时间复杂度为O(NlogN)
//
//	通过一轮的排序将序列分为独立的两部分，右边部分均比左边大
//	重复上述步骤，对序列不断分割，以达到排序
//	由于已经分开的两部分元素不需要再进行比较
//	故减少了比较次数，降低了排序时间
//	
//	
//	
////////////////////////////////////////////////////////////

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

	/*for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = 0; j < v.size() - i - 1; j++)
		{
			if (v[j] > v[j + 1]) swap(v[j], v[j + 1]);
		}
	}*/

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