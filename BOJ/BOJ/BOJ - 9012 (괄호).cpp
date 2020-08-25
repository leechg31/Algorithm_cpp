#include <iostream> 
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <iostream> 
#include <cstdio>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	int N = 0;

	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++)
	{
		stack<char> st;
		string tmp;
		cin >> tmp;

		for (int j = 0; j < tmp.length(); j++)
		{
			if (st.empty() || tmp[j] == '(')
				st.push(tmp[j]);
			else if (st.top() == '(')
				st.pop();
		}

		if (st.empty())
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}

	return 0;
}