/*

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int t, sum = 0;
    cin >> t;
    for (int i = 1; i < t; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum = sum + i;
    }
    cout << sum;
}
