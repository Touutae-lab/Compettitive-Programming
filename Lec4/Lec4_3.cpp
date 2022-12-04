#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, result;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        if (n <= (1 << i))
        {
            printf("%d", i + 1);
            break;
        }
    }
    return 0;
}