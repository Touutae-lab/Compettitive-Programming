#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    long long unsigned value, power = std::pow(10, 9) + 7;
    scanf("%lld", &value);
    value = ((value % power) * (value % power)) % power;
    printf("%lld", value);
    return 0;
}
