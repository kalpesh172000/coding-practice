#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

string timeConversion(string s)
{
    if (s[8] == 'A')
    {
        if (s.substr(0, 2) == "12")
        {
            return "00" + s.substr(2, 6);
        }
        return s.substr(0, 8);
    }
    else
    {
        int h = stoi(s.substr(0, 2));
        h = (h + 12) % 24;
        if (h == 0)
        {
            return "12" + s.substr(2, 6);
        }
        return to_string(h) + s.substr(2, 6);
    }
}

int main()
{
    return 0;
}