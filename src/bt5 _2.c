#include <stdio.h>
#include <string.h>

int main(void) {
	int ngay, thang, nam;

	printf("Ngay: ");
	scanf_s("%d", &ngay);

	printf("Thang: ");
	scanf_s("%d", &thang);

	printf("Nam: ");
	scanf_s("%d", &nam);

	if (ngay <0 || ngay >31 || thang <0 || thang >12)
	{
		printf("Khong hop le");
		
	}
	else
	{
		if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
			printf("Nam Nhuan");
		else
			printf("Khong phai la Nam Nhuan");
	}

	


	_getch();
	return 0;
}
