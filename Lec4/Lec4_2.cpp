#include <bits/stdc++.h>
using namespace std;

int SieveOfEratosthenes(int n, int m)
{
    bool prime[n + 1];
    int count = 0;
    memset(prime, true, sizeof(prime) / sizeof(bool));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * 2; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }
    for (int i = m; i <= n; ++i)
    {
        if (prime[i])
        {
            count += 1;
        }
    }
    return count;
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d", SieveOfEratosthenes(m, n));

    return 0;
}
