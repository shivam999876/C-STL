#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec; // 0
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}