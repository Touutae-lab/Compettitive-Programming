#include <bits/stdc++.h>

using namespace std;
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
    int input, result = 0, max = 0;
    vector<int> n;
    while (scanf("%d", &input) > 0)
        n.push_back(input);
    for (int i = 0; i < n.size(); ++i)
    {
        for (int j = i + 1; j < n.size(); ++j)
        {
            if (i + 1 < n.size())
                result = gcd(n[i], n[j]);
            if (result > max)
            {
                max = result;
            }
        }
    }

    printf("%d", max);
    return 0;
}
