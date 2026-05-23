#include<stdio.h>
#include <time.h>
#include "judge.h"

//main‚©‚çguess‚Ætarget‚ğˆø”‚Æ‚µ‚Äó‚¯æ‚éB‚»‚ê‚ğ()‚É“ü‚ê‚é
bool JudgeNumber(int guess, int target)
{
	if (guess == target)
	{
		return true;
	}
	else if(guess < target)
	{
		printf("‚»‚Ì”š‚æ‚è‘å‚«‚¢‚Å‚·\n");
	}
	else
	{
		printf("‚»‚Ì”š‚æ‚è¬‚³‚¢‚Å‚·\n");
	}
	//³‰ğ‚Å‚È‚¢ê‡‚Ífalse‚ğ•Ô‚·
	return false;
	
}

void Result(int attempts)
{
	printf("³‰ğI\n");
	printf("ŠÔˆá‚¦‚½‰ñ”%d\n", attempts-1);
}