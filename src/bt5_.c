#include <stdio.h>

int main() {

	int ngay, thang, nam;

	printf("Ngay : ");
	scanf_s("%d", &ngay);
	printf("Thang : ");
	scanf_s("%d", &thang);
	printf("Nam : ");
	scanf_s("%d", &nam);

	switch (thang) {

	case 1: case 3: case 5: case 7: case 8: case 10:  case 12:

		if (ngay>0 && ngay <= 31) {

			TinhNamNhuan(nam);
			break;
		}

		else {
			printf("Khong hop le!\n");
			break;

		}

	case 4: case 6: case 9: case 11:

		if (ngay <= 30 && ngay>0) {

			TinhNamNhuan(nam);
			break;
		}

		else {
			printf("Khong hop le!\n");
			break;

		}

	case 2:

		if (ngay <= 29 && ngay > 0) {

			if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0) printf("Nam %d la nam nhuan !",nam);
			else
			{
				if (ngay == 29) {
					printf("Khong hop le!\n");
					break;
				}

				printf("Nam %d khong phai nam nhuan ! ", nam);
			}
			break;
		}

		else {
			printf("Khong hop le!\n");
			break;

		}

	default: printf("Khong hop le!\n");
		break;

	}
	_getch();
	return 0;
}
int TinhNamNhuan(int nam) {

	if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0) printf("Nam %d la nam nhuan ! ", nam);
	else printf("Nam %d khong phai la nam nhuan ! ", nam);

}
