#include<stdio.h>
#include<conio.h>

int main() {
	int n;
	int temp;

	printf("Moi ban nhap vao so nguyen co 3 chu so: ");
	abc:
	scanf_s("%d", &n);

	if (n < 100 || n > 999) {
		printf("Moi ban nhap vao so nguyen co 3 chu so: ");
		printf("\nMoi ban nhap lai !!!");
		goto abc;
	}

	int a;
	a= n % 10; // lay ra chu so cuoi cung : a
	int j;
	j = n / 10;
	int b;
	b = j % 10; //lay ra chu so o giua : b
	int c;
	c = j / 10; // lay ra chu so dau tien : c 

	// so sach
				// chuyển số bé nhất vào a
	if (a>b) {
		temp = a;
		a = b;
		b = temp;
	}

	if (a>c) {
		temp = a;
		a = c;
		c = temp;
	}

	// chuyển số bé nhì vào b
	if (b>c) {
		temp = b;
		b = c;
		c = temp;
	}

	printf("\n %d%d%d", c, b, a);

	_getch();
	return 0;
}