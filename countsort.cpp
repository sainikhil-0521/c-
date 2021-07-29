#include <iostream>
#include <algorithm>
#define max 9
using namespace std;
//count sort by coder
void countsort(int arr[], int n, int div)
{
    // int max = *max_element(arr, arr + n);
    int count[max + 1] = {0}, presum[max + 1], dup_arr[n];
    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / div) % 10]++;
    }
    presum[0] = count[0];
    for (int i = 1; i < (max + 1); i++)
    {
        presum[i] = count[i] + presum[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        dup_arr[(presum[(arr[i] / div) % 10]--) - 1] = arr[i];
    }
    for (int i = 0; i < n; i++)
        arr[i] = dup_arr[i];
}

// int main(int argc, char const *argv[])
// {

//     int arr[7] = {21, 10001, 33, 1, 3, 5, 3};
//     countsort(arr, 7);
//     for (int i : arr)
//         cout << i << " ";

//     return 0;
// }
