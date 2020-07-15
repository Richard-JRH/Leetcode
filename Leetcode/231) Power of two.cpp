bool isPowerOfTwo(int n)
{
	while (n != 1)
	{
		if (n == 0)
			return false;

		if (n % 2 != 0 && n != 1)
			return false;

		n /= 2;
	}

	return true;
}