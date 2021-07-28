#include <iostream>
#include <algorithm>
#include <cmath>
#include "countsort.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int a[] = {12, 2, 1, 10001, 11, 41, 0, 4, 2};
    int n = sizeof(a) / sizeof(int);
    int max1 = *max_element(a, a + n);
    int k = floor(log10(max1)) + 1;
    int pow10 = 1;
    for (int i = 0; i < k; i++)
    {
        countsort(a, n, pow10);
        pow10 *= 10;
    }

    for (int i : a)
        cout << i << " ";

    return 0;
}
