#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

vector<int> A;
vector<int> B;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		A.push_back(tmp);
	}
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		B.push_back(tmp);
	}

	vector<int> C(B);

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<>());

	int ans = 0;

	for (int i = 0; i < N; i++)
		ans += A[i] * B[i];

	B.swap(C);

	cout << ans;
	C.clear();

	return 0;
}