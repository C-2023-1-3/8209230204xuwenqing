#include<iostream>
using namespace std;
int main()
{
	double x,y;
	cout << "请输入x的值：";
		cin >> x;
	if (x > 0 && x < 1)
	{
		y = 3 - 2 * x;
		cout << "y=" << y;
	}
	else if (x >= 1 && x < 5)
	{
		y = 2 / (4 * x) + 1;
		cout << "y=" << y << endl;
	}
	else if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << "y=" << y << endl;
	}
	else if (x <= 0 || x >= 10)
	{
		cout << "无结果。" << endl;
	}
	return 0;
}