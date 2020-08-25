#include <iostream> 
#include <cstdio>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    list<char> L;

    string s;

    cin >> s;

    int N, k;
    cin >> N;

    for (char ch : s)
        L.push_back(ch);

    char tmp;
    auto pos = L.end();

    for (int i = 0; i < N; i++)
    {
        cin >> tmp;

        if (tmp == 'P')
        {
            char tmp1;

            cin >> tmp1;
            L.insert(pos, tmp1);
        }
        else if (tmp == 'L')
        {
            if (pos != L.begin())
                pos--;
        }
        else if (tmp == 'D')
        {
            if (pos != L.end())
                pos++;
        }
        else if (tmp == 'B')
        {
            if (pos != L.begin())
            {
                pos--;
                pos = L.erase(pos);
            }
        }
    }

    for (char ch : L)
        cout << ch;

    return 0;
}