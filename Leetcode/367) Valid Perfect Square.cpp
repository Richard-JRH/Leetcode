bool isPerfectSquare(int num) 
{
    if (num == INT_MAX)
        return false;
    
    int n = 0;
    
    while ( true )
    {
        int res = n * n;
        
        if ( res > num)
            return false;
        
        if ( res == num )
            return true;

        ++n;
    }
    
    return false;
}