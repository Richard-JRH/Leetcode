int numJewelsInStones(string Jewel, string Stone)
{
    int Count = 0;

    for (int i = 0; i < Jewel.length(); ++i)
        for (int j = 0; j < Stone.length(); ++j)
            if (Jewel[i] == Stone[j])
                ++Count;

    return Count;
}