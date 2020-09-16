vector<int> shortestToChar(string S, char C) 
{
    // Return vector
    vector<int> res;
    
    // Precompute indexes of char C in vector
    vector<int> charIdx;
    
    for (int i = 0; i < S.length(); ++i)
        if (S[i] == C)
            charIdx.push_back( i );
        
    for (int i = 0; i < S.length(); ++i)
    {
        int min = INT_MAX;
        
        for (int &itr : charIdx)
        {
            int val = abs( i - itr );
            if ( val < min )
                min = val;
        }
        
        res.push_back( min );
    }
    
    return res;
}










