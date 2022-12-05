#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    long long unsigned sum = 0LL;
    for (int i = 1; i <= n; ++i)
    {
        sum += (2 * i) * (n + 1 - i);
    }
    printf("%lld", sum);
    return 0;
}
