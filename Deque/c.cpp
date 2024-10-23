#include <iostream>
#include <deque>
using namespace std;
int main()
{
    pair<int, pair<char, int>> p = {1, {'a', 3}};
    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;
    return 0;
}
