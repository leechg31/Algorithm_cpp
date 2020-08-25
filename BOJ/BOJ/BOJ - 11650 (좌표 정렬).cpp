#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<list>
#include<stdlib.h>
#include<cstring>
#include<utility>

using namespace std;

bool cmp(const pair<int, int>& x, const pair<int, int>& y)         //const와 &를 꼭 붙힌다
{
	if (x.first < y.first)
		return true;
	else if (x.first == y.first)
		return x.second < y.second;
	else
		return false;
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	vector<pair <int, int>> V(N);       //각 행마다 2쌍을 가진 크기가 N인 벡터 초기화 기억잘해

	for (int i = 0; i < N; i++)
		cin >> V[i].first >> V[i].second;

	sort(V.begin(), V.end(), cmp);

	for (int i = 0; i < N; i++)
		cout << V[i].first << " " << V[i].second << '\n';

}