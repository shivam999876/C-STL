#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[5] = {3, 5, 1, 8, 2};
    sort(arr, arr + 4);
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}