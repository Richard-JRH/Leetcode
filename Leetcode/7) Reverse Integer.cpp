#include <string>

using namespace std;

int reverse(int x)
{
    string str = to_string(x), tmp = " ";
    long double Res = 0;
    bool isPositive = true;

    if (x < 0)
    {
        isPositive = false;
        str.erase(str.begin());
    }

    // Exponent = Digits from left = i
    for (int i = 0; i < str.length(); ++i)
        Res += static_cast<int>(str[i] - 48) * pow(10, i);

    if (Res > INT_MAX)
        return 0;

    if (!isPositive)
        return (int)-Res;

    return (int)Res;
}