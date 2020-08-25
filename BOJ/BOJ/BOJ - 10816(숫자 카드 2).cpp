#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<list>
#include<stdlib.h>
#include<cstring>
#include<utility>

using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	vector<int> Vn(N);

	for (int i = 0; i < N; i++)
		cin >> Vn[i];

	sort(Vn.begin(), Vn.end());

	int M;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int target;
		cin >> target;

		int cnt = upper_bound(Vn.begin(), Vn.end(), target) - lower_bound(Vn.begin(), Vn.end(), target);
		cout << cnt << " ";
	}
}