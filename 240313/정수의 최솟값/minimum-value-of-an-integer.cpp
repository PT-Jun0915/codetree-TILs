#include <iostream>
using namespace std;

int min(int a, int b, int c)
{
	int min{ 100 };
	if (a < min) min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	cout << min(a, b, c);
}