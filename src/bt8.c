#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	
		char line[100];
		printf("Ban nhap vao chuoi ky tu: ");
		//scanf_s("%s", line);
		fgets(line,100,stdin);
		
		for (int i = strlen(line) - 1; i >= 0; i--)
		{
			putchar(line[i]);
		}
		_getch();
     
	return 0;
}

