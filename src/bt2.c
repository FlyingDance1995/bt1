#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
	char name[50];

	printf("Moi ban nhap vao chuoi ky tu: ");
	gets(name);


	int chuhoa = 0;
	int chuthuong = 0;
	int i;
	for (i = 0; i <= strlen(name); i++)
	{
		if (isupper(name[i]))
			chuhoa++;
	}
	printf("So ki tu hoa: %d", chuhoa);

	for (i = 0; i <= strlen(name); i++)
	{
		if (islower(name[i]))
			chuthuong++;
	}
	printf("\nSo ki tu thuong : %d", chuthuong);

	_getch();
	return 0;
}