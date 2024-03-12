#include <iostream>
using namespace std;

void print_star(int n)
{
	for (int i{ 0 }; i < n; ++i)
	{
		cout << "12345^&*()_\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int n;
	cin >> n;
	print_star(n);
}