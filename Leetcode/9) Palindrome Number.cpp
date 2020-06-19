bool isPalindrome(int x)
{
    if (x < 0)
        return false;

    string Num = to_string(x);
    string Temp = "";

    for (int i = Num.length() - 1; i >= 0; --i)
    {
        Temp += Num[i];
    }

    if (Temp == Num)
        return true;

    return false;
}