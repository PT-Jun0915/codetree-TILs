#include <iostream>
using namespace std;

void print_star()
{
	for (int i{ 0 }; i < 10; ++i)
	{
		cout << "*";
	}
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	for (int i{ 0 }; i < 5; ++i)
	{
		print_star();
	}
}