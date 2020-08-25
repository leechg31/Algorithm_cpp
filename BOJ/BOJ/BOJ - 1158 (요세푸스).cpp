#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;

	list<int> people;
	vector<int> result;

	for (int i = 1; i <= N; ++i)
		people.push_back(i);

	list<int>::iterator kill = people.begin();

	int n = N;

	while (n > 0) {
		for (int i = 0; i < K - 1; ++i) {
			if (kill == people.end())
				kill = people.begin();

			kill++;

			if (kill == people.end())
				kill = people.begin();
		}

		result.push_back(*kill);
		kill = people.erase(kill);
		n--;
	}

	cout << "<";

	for (int i = 0; i < result.size() - 1; ++i)
		cout << result[i] << ", ";

	cout << result[result.size() - 1];
	cout << ">";

	return 0;
}