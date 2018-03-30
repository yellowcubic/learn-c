#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
typedef char _TCHAR;
#define _tmain main
#endif

int i;
char* name;

/**
  ทดสอบภาษาไทย
*/
int _tmain(int argc, _TCHAR* argv[]) {
	int data[20];
	int index = 5;
	data[0] = 15;
	data[19] = 77;
	data[index] = 90;

	printf("Index value : %d\n", index);
	printf("data[%d] value : %d\n", index, data[index]);
	printf("data[0] value : %d\n", data[0]);
	printf("data[19] value : %d\n", data[19]);

	for (i = 0;i < 20; i++) {
        printf("i at index %d = %d\n", i, data[i]);
	}

	name = "worajedt";

    printf("%s",name);

	getchar();
	return 0;
}
