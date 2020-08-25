#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<string>

using namespace std;

std::queue<int> Q;

int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string tmp;
		cin >> tmp;

		if (tmp == "push")
		{
			int num;
			cin >> num;

			Q.push(num);
		}
		else if (tmp == "pop")
		{
			if (Q.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << Q.front() << "\n";
				Q.pop();
			}
		}
		else if (tmp == "size")
		{
			cout << Q.size() << "\n";
		}
		else if (tmp == "empty")
		{
			if (Q.empty())
			{
				cout << "1\n";
			}
			else
			{
				cout << "0\n";
			}
		}
		else if (tmp == "front")
		{
			if (Q.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << Q.front() << "\n";
			}
		}
		else if (tmp == "back")
		{
			if (Q.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << Q.back() << "\n";
			}
		}
	}

	return 0;
}