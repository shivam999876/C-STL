#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout << s << endl;
    return 0;
}