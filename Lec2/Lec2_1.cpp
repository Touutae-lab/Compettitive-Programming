#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
    int count = 0;
    long long n, max = 0;
    scanf("%lld", &n);
    max = n;
    while (n > 1)
    {
        count += 1;
        if (n % 2 == 0)
        {
            n = pow(n, 0.5);
        }
        else
        {
            n = sqrt(pow(n, 3));
            if (n > max)
            {
                max = n;
            }
        }
    }
    count += 1;
    printf("%lld %d", max, count);
}