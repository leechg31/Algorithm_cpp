#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int gcd(int A, int B)            //최대공약수
{
    return (A % B == 0 ? B : gcd(B, A % B));
}

int lcm(int A, int B)               //최소 공배수
{
    return A * B / gcd(A, B);
}

int solution(vector<int> arr) {
    int answer = 0;

    sort(arr.begin(), arr.end(), greater<int>());           //내림차순

    int arr_count = arr.size();

    answer = arr[0];
    for (int j = 1; j < arr_count; j++)
    {
        if (answer > arr[j]) answer = lcm(answer, arr[j]);
        else answer = lcm(arr[j], answer);
    }

    return answer;
}