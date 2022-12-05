#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    long long sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += i * (n + 1 - i);
    }
    printf("%lld", sum);
    return 0;
}
