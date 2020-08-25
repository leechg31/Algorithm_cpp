#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<list>
#include<stdlib.h>
#include<cstring>

using namespace std;

vector<string> V;

bool Icompare(string cmp1, string cmp2)//strick weak ordering을 만족해야함. 즉 if문에서 return시 false 부터 나와야함.
{
	if (cmp1.size() != cmp2.size())
	{
		if (cmp1.size() >= cmp2.size())
			return false;
		else
			return true;
	}
	else
	{
		if (cmp1.compare(cmp2) >= 0)
			return false;
		else
			return true;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++)
	{
		string tmp;
		cin >> tmp;
		V.push_back(tmp);
	}

	sort(V.begin(), V.end(), Icompare);
	V.erase(unique(V.begin(), V.end()), V.end());

	for (string s : V)
		cout << s << "\n";

	return 0;
}