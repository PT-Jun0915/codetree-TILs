#include <iostream>
using namespace std;

int sum(int n)
{
	int sum{ 0 };
	for (int i{ 1 }; i <= n; ++i)
	{
		sum += i;
	}
	return sum / 10;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int n;
	cin >> n;
	cout << sum(n);
}