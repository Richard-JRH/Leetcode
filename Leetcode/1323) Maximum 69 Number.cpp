int maximum69Number(int num)
{
    int Max = num;

    string str = to_string(num);

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == '6')
        {
            string Temp = str;

            Temp[i] = '9';

            if (stoi(Temp) > Max)
                Max = (stoi(Temp));
        }
    }

    return Max;
}