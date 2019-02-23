////////////////////////////////////////////////////////////
//
//	快速排序
//
//	是冒泡排序的改进版
//
//	最差时间复杂度为O(N平方)
//	平均时间复杂度为O(Nlog2(N))
//
//	通过一轮的排序将序列分为独立的两部分，右边部分均比左边大
//	重复上述步骤，对序列不断分割，以达到排序
//	由于已经分开的两部分元素不需要再进行比较
//	故减少了比较次数，降低了排序时间
//	
//	经过快速排序后两个相同值的相对位置可能会发生改变
//	所以快速排序是一种不稳定排序
//	
////////////////////////////////////////////////////////////

#include<iostream>
#include<vector>

using namespace std;

//要先声明才能使用
void quickSort(vector<int>& v, int left, int right);

void main()
{
	vector<int> v = { 9, 2, 24, -3, 4, 11, 0, 5 };

	//排序前
	for (int i : v)	cout << i << ends;

	//换两次行
	cout << endl << endl;

	quickSort(v, 0, v.size() - 1);

	//排序后
	for (int i : v)	cout << i << ends;

	//防止窗口消失
	getchar();
}

void quickSort(vector<int>& v, int originLeft, int originRight)
{
	int left = originLeft;
	int right = originRight;

	if (originLeft < originRight)
	{
		int base = v[left];

		while (left != right)
		{
			while (right > left && v[right] >= base) right--;
			v[left] = v[right];
			while (right > left && v[left] <= base) left++;
			v[right] = v[left];
		}

		v[left] = base;

		quickSort(v, originLeft, left - 1);
		quickSort(v, right + 1, originRight);
	}
}