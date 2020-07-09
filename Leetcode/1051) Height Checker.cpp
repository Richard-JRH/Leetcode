int heightChecker(vector<int>& heights)
{
	int res = 0;
	vector<int>tmpVec = heights;

	sort(tmpVec.begin(), tmpVec.end());

	for (int i = 0; i < tmpVec.size(); ++i)
		if (tmpVec[i] != heights[i])
			++res;

	return res;
}