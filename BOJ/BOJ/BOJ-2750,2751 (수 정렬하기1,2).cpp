#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> V;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		V.push_back(num);
	}

	sort(V.begin(), V.end());

	for (auto& i : V)
	{
		cout << i << '\n';
	}
}