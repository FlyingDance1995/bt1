#include<stdio.h>
#include<conio.h>

int main() {
	int m;
	m = Input();
	Action(m);

	_getch();
	return 0;
}

int Input() {
	int n;
	printf("Moi ban nhap vao so nguyen co 3 chu so: ");
	scanf_s("%d", &n);

	while (n < 100 || n > 999)
	{
		printf("\n Nhap Sai !!! \n Moi ban nhap lai !!! \n");
		scanf_s("%d", &n);
	}
	return n;
}

int Action(int m) {

	int a;
	a = m % 10; // lay ra chu so cuoi cung : a
	int j;
	j = m / 10;
	int b;
	b = j % 10; //lay ra chu so o giua : b
	int c;
	c = j / 10; // lay ra chu so dau tien : c 

		// so sanh
				
	int temp;

	if (a>b) {
		temp = a; // chuyển số bé nhất vào a
		a = b;
		b = temp;
	}

	if (a>c) {
		temp = a;
		a = c;
		c = temp;
	}

	if (b>c) {
		temp = b; // chuyển số bé nhì vào b
		b = c;
		c = temp;
	}

	printf("\n%d%d%d", c, b, a);
	return c, b, a;
}
