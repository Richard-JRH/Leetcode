int peakIndexInMountainArray(vector<int>& A) 
{
    for (int i = 0; i < A.size(); ++i)
        if (A[i + 1] < A[i])
            return i;
        
    return 0;
}