#include <iostream>
using namespace std;

void print_star(int n, int m)
{
	for (int i{ 0 }; i < n; ++i)
	{
		for (int j{ 0 }; j < m; ++j)
		{
			cout << 1;
		}
		cout << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	print_star(n, m);
}