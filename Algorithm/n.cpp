#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << *(min_element(vec.begin(), vec.end())) << endl;
    return 0;
}