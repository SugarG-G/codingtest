#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	//���̷����� �� K, ������ P, �� �ð� N(��)�� �־�����.
	unsigned long long k,p,n;
	cin >> k >> p>> n;
	for (int i = 0; i < n; i++)
	{
		k = k * p % 1000000007;
	}

	cout << k;
	return 0;
}