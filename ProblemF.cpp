
/*
	@author: Amir Aghazadeh
*/

#include <iostream>
#include<bits/stdc++.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main()
{
	string word;
	cin >> word;
	
	string wordUpperCase = word;
	transform(wordUpperCase.begin(), wordUpperCase.end(), wordUpperCase.begin(), ::toupper);
	
	string wordLowerCase = word;
	transform(wordLowerCase.begin(), wordLowerCase.end(), wordLowerCase.begin(), ::tolower);
	
	string tmp = word.substr(0, 1);
	tmp[0] = tolower(word[0]); 
	string tmp2 = word.substr(1, word.length());
	transform(tmp2.begin(), tmp2.end(), tmp2.begin(), ::toupper);
	tmp += tmp2;
	
	
	if(word == wordUpperCase) 
	{
		cout << wordLowerCase;
	}
	else if(tmp == word)
	{
	    string tmp3 = word.substr(0, 1);
		
		tmp3[0] = toupper(word[0]);
		
		string tmp4 = word.substr(1, word.length());
		transform(tmp4.begin(), tmp4.end(), tmp4.begin(), ::tolower);
		tmp3 += tmp4;
		
		cout << tmp3;
	}
	else
	{
		cout << word;
	}
	
	return 0;
}