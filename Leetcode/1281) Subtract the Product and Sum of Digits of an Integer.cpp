#include <string>	

using namespace std;

int subtractProductAndSum(int n)
{
    string str = to_string(n);
    int Product = 1, Sum = 0;

    for (int i = 0; i < str.length(); ++i)
    {
        Product *= (int)(str[i] - 48);
        Sum += (int)(str[i] - 48);
    }

    return Product - Sum;
}