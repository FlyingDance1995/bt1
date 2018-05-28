#include<stdio.h>

int main() {

	int a, b;

	printf("Nhap so nguyen duong a = ");
	scanf_s("%d", &a);
	printf("Nhap so nguyen duong b = ");
	scanf_s("%d", &b);


	printf("UCLN cua %d va %d la: %d", a, b, UCLN(a, b));
	
	printf("\nUCLN cua %d va %d la: %d", a, b, BCNN(a, b));
	getch();
	return 0;

}

int UCLN(int a, int b) {
	if (b == 0) {
		return a;
	}
	return UCLN(b, a % b);
}

int BCNN(int a, int b) {
	return (a * b) / UCLN(a, b);
}
