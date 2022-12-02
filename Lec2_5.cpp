#include <bits/stdc++.h>

unsigned int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    unsigned int sum = 0;
    for (int i = 1; i < n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            sum += gcd(i, j);
        }
    }
    printf("%d", sum);
    return 0;
}
