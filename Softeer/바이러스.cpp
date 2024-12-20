#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	//바이러스의 수 K, 증가율 P, 총 시간 N(초)이 주어진다.
	unsigned long long k,p,n;
	cin >> k >> p>> n;
	for (int i = 0; i < n; i++)
	{
		k = k * p % 1000000007;
	}

	cout << k;
	return 0;
}