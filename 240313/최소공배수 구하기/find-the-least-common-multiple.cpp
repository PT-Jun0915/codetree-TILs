#include <iostream>
using namespace std;

int lcm(int n, int m)
{
	int min{ (m > n ? n : m) };
	if (min == 1) return n * m;
	while (true)
	{
		if (n % min == 0 && m % min == 0)
			return min * (n / min) * (m / min);
		--min;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	cout << lcm(n, m);
}