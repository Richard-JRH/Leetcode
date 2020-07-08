vector<int> finalPrices(vector<int>& prices)
{
	vector<int> res;

	for (int i = 0; i < prices.size(); ++i)
	{
		if (i == prices.size() - 1)
			res.push_back(prices[i]);

		for (int j = i + 1; j < prices.size(); ++j)
			if (j == prices.size() - 1)
			{
				if (prices[j] <= prices[i])
					res.push_back(prices[i] - prices[j]);
				else
					res.push_back(prices[i]);
			}
			else if (prices[j] <= prices[i])
			{
				res.push_back(prices[i] - prices[j]);
				break;
			}
	}

	return res;
}