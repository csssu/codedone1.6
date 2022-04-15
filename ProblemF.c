
/*
	@author: Amir Aghazadeh
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int main()
{
	char word[MAX_SIZE];
	scanf("%s", word);
	
	char wordUpperCase[MAX_SIZE];
	strcpy(wordUpperCase, word);
	for(int i = 0; i < strlen(word); i++)
	{
		wordUpperCase[i] = toupper(wordUpperCase[i]);
	}
	
	char wordLowerCase[MAX_SIZE];
	strcpy(wordLowerCase, word);
	
	for(int i = 0; i < strlen(word); i++)
	{
		wordLowerCase[i] = tolower(wordLowerCase[i]);
	}

	char tmp[MAX_SIZE];
	strcpy(tmp, word);
	tmp[0] = tolower(tmp[0]);
	for(int i = 1; i < strlen(word); i++)
	{
		tmp[i] = toupper(tmp[i]);
	}
	
	if(strcmp(word, wordUpperCase) == 0)
	{
		printf("%s", wordLowerCase);
	}
	else if(strcmp(tmp, word) == 0)
	{
		tmp[0] = toupper(tmp[0]);
		for(int i = 1; i < strlen(word); i++)
		{
			tmp[i] = tolower(tmp[i]);
		}
		
		printf("%s", tmp);
	}
	else
	{
		printf("%s", word);
	}

	return 0;
}