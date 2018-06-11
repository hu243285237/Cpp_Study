//////////////////////////////////////////////////
//	函数模板 template "求绝对值"
//////////////////////////////////////////////////

#include <iostream>

using namespace std;

//声明模板类型T,T代表任意类型,返回类型为T,参数的类型也为T
template <class T>
T myAbs(T parm)
{
	return parm > 0 ? parm : -parm;
}

int main()
{
	int i = 50;
	float f = -3.25f;
	long l = 723358;

	cout << myAbs(i) << endl;
	cout << myAbs(f) << endl;
	cout << myAbs(l) << endl;

	cin >> i;
}