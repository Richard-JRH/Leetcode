vector<int> sortedSquares(vector<int>& A)
{
	for (int& itr : A)
		itr *= itr;

	sort(A.begin(), A.end());

	return A;
}