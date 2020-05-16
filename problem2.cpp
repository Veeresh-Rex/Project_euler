#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int a = 1;
    long int b = 1;
    long int sum = 0;
    long i = 0;
    while (i < 4000000)
    {
        if (i % 2 == 0)
            sum = sum + i;
        a = b;
        b = i;
        i = a + b;
    }

    cout << sum;
    return 0;
}