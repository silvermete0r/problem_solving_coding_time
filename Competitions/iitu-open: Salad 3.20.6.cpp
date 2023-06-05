#include <bits/stdc++.h>

using namespace std;

int digitsum(int c) {
	int sum = 0;
	while (c > 0)
	{
		int m = c % 10;
		sum = sum + m;
		c = c / 10;
	}
	return sum;
}

int main() {
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	cout << abs(a) << " " << b * b * b << " " << digitsum(abs(c));
}
