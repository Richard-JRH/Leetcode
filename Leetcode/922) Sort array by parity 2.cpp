vector<int> sortArrayByParityII(vector<int>& A)
{
	vector<int> res(A.size());

	int even = 0, odd = 1;

	for (int i = 0; i < A.size(); ++i)
		if (A[i] % 2 == 0)
		{
			res[even] = A[i];
			even += 2;
		}
		else
		{
			res[odd] = A[i];
			odd += 2;
		}

	return res;
}