#include <stdlib.h>
#include <stdio.h>
#define MAX 80

int main(void)
{
	FILE *fptr;
	char str[MAX];
	int bytes;
	int a;
	a= fopen_s(&fptr,"D://NTUT/programing/107360210_ªô«~¿«/P17/output.txt", "r");
	while (!feof(fptr))
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
	system("pause");
	return 0;
}