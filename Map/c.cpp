#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> m;
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;
    m["camera"] = 25;
    m.erase("tv");

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    if (m.find("camera") != m.end())
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not Found\n";
    }
    return 0;
}