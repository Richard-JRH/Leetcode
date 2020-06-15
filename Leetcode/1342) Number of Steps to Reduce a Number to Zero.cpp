int numberOfSteps(int num)
{
    int Steps = 0;

    while (num != 0)
    {
        if (num % 2 == 0)   // Even
        {
            num /= 2;
        }
        else
        {
            --num;
        }

        ++Steps;
    }

    return Steps;
}