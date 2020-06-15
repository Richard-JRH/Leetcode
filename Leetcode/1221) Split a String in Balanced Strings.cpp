#include <string>

using namespace std;

int balancedStringSplit(string str)
{
	int Count = 0, Ans = 0;

	for (int i = 0; i < str.length(); ++i)
	{
		str[i] == 'R' ? ++Count : --Count;

		if (Count == 0)
			++Ans;
	}

	return Ans;
}