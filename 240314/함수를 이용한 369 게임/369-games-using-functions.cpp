#include <iostream>
using namespace std;

bool Is_true(int n)
{
	while (n > 0)
	{
		if (((n % 10 % 3 == 0) && (n % 10) != 0)|| n % 3 == 0) return true;
		n /= 10;
	}
	return false;
}

int count(int a, int b)
{
	int ans{ 0 };
	for (int i{ a }; i <= b; ++i)
	{
		if (Is_true(i)) ++ans;
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int a, b;
	cin >> a >> b;
	cout << count(a, b);
}