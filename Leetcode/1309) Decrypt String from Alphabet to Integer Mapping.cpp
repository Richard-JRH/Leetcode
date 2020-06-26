string freqAlphabets(string str) 
{
	int itr = 0;
	bool done = false;
	string res = "", strTmp = "";

	while (!done)
	{
		strTmp = "";

		if (str[itr + 2] == '#')
		{
			strTmp += str[itr];
			strTmp += str[itr + 1];

			int intTmp = stoi(strTmp);
			intTmp += 96;

			res += (char)intTmp;
			itr += 3;
		}
		else
		{
			res += (char)(str[itr] + 48);
			++itr;
		}

		if (itr >= (str.length() - 1))
		{
			if (str[str.length() - 1] != ' ' &&
				str[str.length() - 1] != '#')
			{
				res += (char)(str[itr] + 48);
			}

			done = true;
		}
	}

	return res;
}
