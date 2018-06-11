//////////////////////////////////////////////////
//	Êä³ö¾Å¾Å³Ë·¨±í
//////////////////////////////////////////////////

#include <iostream>

using namespace std;

int _P51()
{
	for (int i = 1; i <= 9;i++)
	{
		for (int j = 1; j <= 9;j++)
		{
			cout << i << " * " << j << " = " << i*j << endl;
			cout << endl;
		}
	}

	int a;
	cin >> a;

	return 0;
}