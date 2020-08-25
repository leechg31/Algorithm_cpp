#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<stack>
#include<string>

using namespace std;

std::stack<int> S;

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

			S.push(num);
		}
		else if (tmp == "pop")
		{
			if (S.empty())
				cout << "-1\n";
			else
			{
				cout << S.top() << "\n";
				S.pop();
			}
		}
		else if (tmp == "size")
		{
			int num = S.size();
			cout << num << "\n";
		}
		else if (tmp == "empty")
		{
			if (S.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (tmp == "top")
		{
			if (S.empty())
				cout << "-1\n";
			else
			{
				cout << S.top() << "\n";
			}
		}
	}

	return 0;
}