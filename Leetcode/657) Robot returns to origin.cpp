bool judgeCircle(string moves) 
{
    int posX = 0;
    int posY = 0;
    
    for (char &c : moves)
    {
        switch ( c )
        {
            case 'U': 
            {
                ++posY;
                break;
            }
            case 'D': 
            {
                --posY;
                break;
            }
            case 'L': 
            {
                --posX;
                break;
            }
            case 'R': 
            {
                ++posX;
                break;
            }
        }
    }
    
    return posX == 0 && posY == 0;
}