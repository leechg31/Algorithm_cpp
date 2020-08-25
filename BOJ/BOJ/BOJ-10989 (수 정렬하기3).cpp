#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ar[10001] = { 0 };

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		ar[num]++;
	}

	for (int i = 1; i < 10001; i++)
	{
		for (int j = 0; j < ar[i]; j++)
		{
			cout << i << "\n";
		}
	}
}