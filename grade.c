#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
typedef char _TCHAR;
#define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[]) {
	int score;

	printf("Please enter your score:");
	scanf("%d", &score); // scan integer input into score's address
	if (score >= 80) {
		printf("Your score is %d, you get A", score);
	}
	else {
		printf("Your score is less than 80");
	}

	getchar();
	getchar();
	return 0;
}
