#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <algorithm>

using namespace std;

string smorse(string str)
{
	map<char, string> morseTable;

	char Letter = ' ';
	string Morse = "";

	ifstream myFile("morse.txt");

	if (myFile.is_open()) {
		while (myFile >> Letter >> Morse)
			morseTable.insert(make_pair(Letter, Morse));

		myFile.close();
	}
	else {
		cout << "Unable to open file";
		return "Fail";    // Fail    /* Faile */
	}

	for_each(str.begin(), str.end(), [](char& c) {
		c = ::toupper(c);
	});

	string res = "";

	for (auto &itr : str)
		res += morseTable[itr];

	return res;
}