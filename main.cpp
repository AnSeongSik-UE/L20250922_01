#include <iostream>

using namespace std;

int main() 
{
	int Count = 0;
	cin >> Count;

	for (int i = 1; i <= Count; ++i)
	{
		for (int j = 1; j <= Count; ++j)
		{
			if (j < i)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << "\n";
	}
	return 0;
}