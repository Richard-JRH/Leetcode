vector<int> sortArrayByParity(vector<int>& A)
{
	int k = 0;
	int j = A.size() - 1;

	vector<int> res(A.size());

	for (int i = 0; i < A.size(); ++i)
		if (A[i] % 2 == 0)
		{
			res[k] = A[i];
			++k;
		}
		else
		{
			res[j] = A[i];
			--j;
		}

	return res;
}