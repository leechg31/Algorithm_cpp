#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

//ÀÌÁøÅ½»ö
using namespace std;

int N, M;
vector<int> V;

int Binary_Search(int low, int high, int target)
{
    if (low > high)
    {
        return 0;
    }
    else
    {
        int mid = (low + high) / 2;

        if (V[mid] == target)
        {
            return 1;
        }
        else if (V[mid] > target)
        {
            return Binary_Search(low, mid - 1, target);
        }
        else
        {
            return Binary_Search(mid + 1, high, target);
        }
    }
}

int main(void)
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num;

        cin >> num;
        V.push_back(num);
    }

    sort(V.begin(), V.end());

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        int num;

        cin >> num;
        V.push_back(num);

        cout << Binary_Search(0, N - 1, num) << '\n';
    }
}