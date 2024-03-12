#include <iostream>
using namespace std;

int gcd(int n, int m)
{
	int min{ (m > n ? n : m) };
	if (min == 1) return 1;
	while (min--)
	{
		if (m % min == 0 && n % min == 0)
		{
			return min;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	cout << gcd(n, m);
}