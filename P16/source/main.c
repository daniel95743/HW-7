#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#define ENTER 13
#define MAX 80

int main(void)
{
	FILE *fptr;
	char str[MAX], ch;
	int i = 0;
	int a;
	a = fopen_s(&fptr,"D://NTUT/programing/107360210_���~��/P16/output.txt", "a");
	printf("�п�J�r��A��ENTER��������J:\n");
	while ((ch = _getche()) != ENTER && i < MAX)
	{
		str[i++] = ch;
	}
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n�ɮת��[����!!\n");
	system("pause");
	return 0;
}