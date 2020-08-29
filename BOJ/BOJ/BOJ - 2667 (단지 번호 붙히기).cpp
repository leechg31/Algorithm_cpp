#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX = 25;

int N;

int graph[MAX][MAX];

bool visited[MAX][MAX];

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };

int cnt;

vector<int> cnt_v;

void DFS(int x, int y)
{
    cnt++;
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)  //상하좌우 확인
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= N || ny < 0 || ny >= N)
            continue;

        if (graph[nx][ny] == 1 && visited[nx][ny] == false)
            DFS(nx, ny);
    }
}

int main()
{
    string s;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> s;

        for (int j = 0; j < N; j++)
        {
            graph[i][j] = s[j] - '0';
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (graph[i][j] == 1 && visited[i][j] == false)
            {
                cnt = 0;

                DFS(i, j);
                cnt_v.push_back(cnt);
            }
        }
    }

    sort(cnt_v.begin(), cnt_v.end());

    cout << cnt_v.size() << '\n';

    for (int i = 0; i < cnt_v.size(); i++)
        cout << cnt_v[i] << '\n';

    return 0;
}