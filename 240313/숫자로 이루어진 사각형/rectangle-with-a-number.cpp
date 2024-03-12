#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int n, m{ 1 };
	cin >> n;
	for (int i{ 0 }; i < n; ++i)
	{
		for (int j{ 0 }; j < n; ++j)
		{
			cout << m++ << " ";
			if (m == 10) m = 1;
		}
		cout << "\n";
	}
}