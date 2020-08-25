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

	vector<int> V(N);

	for (int i = 0; i < N; i++)
		cin >> V[i];

	sort(V.begin(), V.end());

	V.erase(unique(V.begin(), V.end()), V.end());

	for (auto& i : V)
		cout << i << " ";
}