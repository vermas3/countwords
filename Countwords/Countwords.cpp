// Countwords.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;
int countwords(char myphr[100]);


int main() {
	char myphrase[100];
	cout << "Enter phrase" << endl;
	gets_s(myphrase);

	int cw = countwords(myphrase);
	cout << " you have " << cw << " words " << endl;
	return 0;
}


int countwords(char myphr[100])
{
	bool inword = false;
	int	words = 0;
	int i;
	for (i = 0; i < strlen(myphr); i++)
	{
		if (myphr[i] !=' ' && !inword)
		{
			words++;
			inword = true;
		}
		else if (myphr[i] == ' ')
		{
		inword = false;
		}
	}
	return words;
}