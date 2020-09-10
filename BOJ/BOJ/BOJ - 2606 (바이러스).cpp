#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<stdlib.h>
#include<cstring>
#include<utility>

using namespace std;

#define MAX_NUM = 10;
vector<vector<int>> graph[MAX_NUM];
int N, M;
int visited[MAX_NUM];
int cnt = 0;

void DFS(int x)
{
	std::ios_base::sync_with_stdio(0);
	cout.tie(0);

	visited[x] = true;

	cnt++;

	for (int i = 0; i < graph[x].size(); i++)
	{
		int y = graph[x][i];

		if (visited[y] == false)
		{
			DFS(y);
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;

		graph[tmp1].pushback(tmp2);
		graph[tmp2].pushback(tmp1);
	}

	DFS(N);
}