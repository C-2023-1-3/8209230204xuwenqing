#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入两个正整数：";
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	int m=1, n=1, k=2;
	while (k <= a && k <= b)
	{
		if (a % k == 0 && b % k == 0)
			m = k;
		k++;
	}
	n = (a * b) / m;
	cout << "a与b的最大公约数为" <<m<< endl;
	cout << "a与b的最大公倍数为" <<n<< endl;

	return 0;
}