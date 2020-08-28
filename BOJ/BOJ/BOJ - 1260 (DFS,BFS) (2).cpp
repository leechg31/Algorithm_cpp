#include <iostream>
#include <stack>
#include <vector>
#include<algorithm>
#include<queue>
using namespace std;

int N, M;
const int MAX = 1001;
vector<int> Graph[MAX];
bool visited_v[MAX] = { false };  //초기 false로 아직 방문x
queue<int> q[MAX];
bool visited_q[MAX] = { false };

void DFS(int x)
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	visited_v[x] = true;  //방문

	cout << x << " ";

	for (int i = 0; i < Graph[x].size(); i++)
	{
		int y = Graph[x][i];

		if (visited_v[y] == false)
		{
			DFS(y);
		}
	}
}

void BFS(int x)
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	q->push(x);
	visited_q[x] = true;

	while (!q->empty())
	{
		cout << q->front() << " ";

		int current = q->front();

		q->pop();

		for (int i = 0; i < Graph[current].size(); i++)
		{
			if (visited_q[Graph[current][i]] == false)
			{
				visited_q[Graph[current][i]] = true;
				q->push(Graph[current][i]);
			}
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int v;

	cin >> N >> M >> v;

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;

		Graph[a].push_back(b);
		Graph[b].push_back(a);
	}

	for (int i = 0; i < N; i++)
		sort(Graph[i].begin(), Graph[i].end());

	DFS(v);
	cout << '\n';
	BFS(v);
}