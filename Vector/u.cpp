#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int>::iterator it;
    for (auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *(it) << endl;
    }
    return 0;
}