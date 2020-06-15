#include <string>

using namespace std;

string defangIPaddr(string Addr)
{
    string Temp;

    for (int i = 0; i < Addr.length(); ++i)
    {
        if (Addr[i] == '.')
        {
            Temp += '[';
            Temp += '.';
            Temp += ']';
        }
        else
        {
            Temp += Addr[i];
        }
    }

    return Temp;
}