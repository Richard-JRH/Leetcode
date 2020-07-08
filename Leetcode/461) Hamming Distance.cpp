int hammingDistance(int x, int y)
{
	// Init
	string n1 = "";
	string n2 = "";
	int res = 0;

	// Decimal to binary
	// Num 1
	while (x != 0)
	{
		n1.insert(0, to_string(x % 2));
		x /= 2;
	}
	cout << "n1 : " << n1 << endl;

	// Num 2 
	while (y != 0)
	{
		n2.insert(0, to_string(y % 2));
		y /= 2;
	}
	cout << "n2 : " << n2 << endl;

	// Hamming Distance
	string max = "";
	string min = "";

	if (n1.length() >= n2.length())
	{
		max = n1;
		min = n2;
	}
	else
	{
		max = n2;
		min = n1;
	}

	while (min.length() != max.length())
	{
		min.insert(0, "0");
	}

	for (int i = 0; i < max.length(); ++i)
		if (max[i] != min[i])
			++res;

	return res;
}