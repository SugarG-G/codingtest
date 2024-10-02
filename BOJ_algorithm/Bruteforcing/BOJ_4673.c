#include <stdio.h>

int d(int n) {
	int ret = n;
	while (n) {
		ret += n % 10;
		n /= 10;
	}
	return ret;
}

int main() {
	int a[10000] = { 0, };

	for (int i = 0; i < 10000; ++i) {
		int ret = d(i);
		if (ret < 10000) ++a[ret];
	}

	for (int i = 0; i < 10000; ++i) {
		if (!a[i]) printf("%d\n", i);
	}
	return 0;
}