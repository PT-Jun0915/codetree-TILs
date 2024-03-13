#include <iostream>
using namespace std;

bool is_true(int n)
{
	return n % 2 == 0 && (n / 10 + n % 10) % 5 == 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int n;
	cin >> n;
	cout << (is_true(n) ? "Yes" : "No");
}