int addDigits(int num)
{
    if (to_string(num).length() == 1)
        return num;

    int total = 0;
    int tmpNum = num;

    while ( true ) 
    {
        total = 0;
        string numStr = to_string(tmpNum);

        for (int i = 0; i < numStr.size(); ++i)
            total += ((int)numStr[i] - 48);

        if (to_string(total).length() == 1)
            return total;

        tmpNum = total;
    }

    return -1;
}