#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    int m[n] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &m[i]);
    }

    int tmp[n] = {0};
    long long max = 0, current = 0;
    for (int i = 0; i < n; ++i)
    {
        // Check values is grater than 1
        if (m[i] > 0)
        {
            // add current += value
            current += m[i];
            tmp[i] = 1;
        }
        else
        {
            if (tmp[i] > current)
            {
                tmp[i] = -1;
                if (current > max)
                {
                    max = current;
                }
                current = 0;
            }
            else
            {
                tmp[i] = 0;
            }
        }
    }
    // bool found = false;
    // for (int i = 0; i < n; ++i)
    // {
    // }
    int size = sizeof(tmp) / sizeof(tmp[0]);
    printArray(tmp, size);
    printf("%d", max);
    return 0;
}
