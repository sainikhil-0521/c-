#include <bits/stdc++.h>
using namespace std;

vector<bool> prime(1000, true);

void make_prime(int n)
{
    prime[0] = false;
    for (int i = 2; (i * i) <= n; i++)
    {
        for (int j = i * i; j <= n; j += i)
        {
            prime[j - 1] = false;
        }
    }
}
int main(int argc, char const *argv[])
{
    cout << "enter n:";
    int n;
    cin >> n;

    make_prime(n);
    for (int i = 0; i < n; i++)
    {

        if (prime[i])
            cout << i + 1 << " ";
    }
    return 0;
}
