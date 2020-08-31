#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int m, n;
int z = 0;

int visited[100001];

void BFS() {
	queue<pair<int, int>> q;

	q.push(make_pair(m, z));

	visited[m] = 1;

	while (!q.empty()) 
	{
		int M = q.front().first;

		int Z = q.front().second;

		q.pop();

		if (M == n)
			cout << Z;

		if (M + 1 <= 100000 && visited[M + 1] == 0) 
		{
			q.push(make_pair(M + 1, Z + 1));

			visited[M + 1] = 1;
		}
		if (M - 1 >= 0 && visited[M - 1] == 0)
		{
			q.push(make_pair(M - 1, Z + 1));

			visited[M - 1] = 1;
		}
		if (M * 2 <= 100000 && visited[M * 2] == 0)
		{
			q.push(make_pair(M * 2, Z + 1));

			visited[M * 2] = 1;
		}
	}
}

int main() 
{
	cin >> m >> n;

	if (m == n) 
	{
		cout << 0;
		return 0;
	}

	for (int i = 0; i < 100000; i++) 
	{
		visited[i] = 0;
	}

	BFS();
}