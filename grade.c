#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[]) 
{
	int score;

	printf("Please enter your score:");
	scanf("%d",&score);     //scan integer input into score's address
	printf("Your score is %d",score);

	getchar();
	getchar();
	return 0;
}
