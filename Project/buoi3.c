#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//bài 1
void buoi3_bai_1() {
	int n = 0;
	printf("Nhap so nguyen n: ");
	scanf(" %d", &n);
	//if (n % 2 == 0) {
	//	printf("So chan");
	//}
	//else {
	//	printf("So le");
	//}
	n % 2 && printf("so le");
	!(n % 2) && printf("so chan");
}
void buoi3_bai_2() {
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;
	printf("Nhap 3 so nguyen a, b, c: ");
	scanf(" %d, %d, %d", &a, &b, &c);
	printf("3 so nguyen a, b, c: %d %d %d \n", a, b, c);
	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}
	if (max < c) {
		max = c;
	}

	printf("gia tri lon nhat la: %d", max);
}
void buoi3_bai_3() {
	float gpa = 0;
	printf("Nhap diem cua ban: ");
	scanf("%f", &gpa);
	if (gpa >= 8.0) {
		printf("Loai Gioi");
	}
	else if (gpa >= 6.5) {
		printf("Loai Kha");
	}
	else if (gpa >= 5.0) {
		printf("Loai Trung Binh");
	}
	else {
		printf("Loai Yeu");
	}
}
void buoi3_bai_4() {
	int n = 0;
	printf("Nhap so nguyen tu 1->7: ");
	scanf("%d", &n);
	switch (n) {
	case 1:
		printf("Sunday");
		break;
	case 2:
		printf("Monday");
		break;
	case 3:
		printf("Tuesday");
		break;
	case 4:
		printf("Wednesday");
		break;
	case 5:
		printf("Thursday");
		break;
	case 6:
		printf("Friday");
		break;
	case 7:
		printf("Saturday");
		break;
	default:
		printf("Invalid input!");
		break;

	}
}
void buoi3_bai_5() {
	for (int j = 2; j <= 9; j++) {
		if (j == 4) continue;
		printf("Bang Cuu Chuong %d: \n", j);
		for (int i = 1; i <= 10; i++) {
			printf("    %d x %d = %d \n", j, i, j * i);
		}
	}
}
void buoi3_bai_6() {
	float gpa = 0;
	int count = 1;

	do {
		if (count > 3) {
			printf("Ban da nhap sai qua ba lan! \nKet thuc chuong trinh! \n");
			return;
		}

		if (count == 1) {
			printf("Nhap diem cua ban: ");
		}
		else {
			printf("Nhap lai diem cua ban: ");
		}

		if (scanf("%f", &gpa) != 1) {
			printf("Invalid Input! \n");
			while (getchar() != '\n');
			gpa = -1;
			count++;
			continue;
		}
		count++;
	} while (gpa < 0 || gpa > 10);
	if (gpa >= 8.0) {
		printf("Loai Gioi");
	}
	else if (gpa >= 6.5) {
		printf("Loai Kha");
	}
	else if (gpa >= 5.0) {
		printf("Loai Trung Binh");
	}
	else {
		printf("Loai Yeu");
	}
}
void buoi3_bai_7() {
	int step = 1;
	int pwd = 123456;
	int budget = 50000000;
	int count = 1;
	int sotien = 0;
	while (step != 5) {
		switch (step) {
		case 1: {
			int usr_pwd = 0;
			printf("Nhap mat khau cua ban: ");
			if (scanf("%d", &usr_pwd) != 1) {
				printf("Invalid Input! \n");
				while (getchar() != '\n');
				break;
			}
			if (usr_pwd != pwd) {
				step = 6;
			}
			else {
				step = 2;
			}
			break;
		}
		case 2: {

			printf("Nhap so tien muon rut: ");
			if (scanf("%d", &sotien) != 1) {
				printf("Invalid Input! \n");
				while (getchar() != '\n');
				break;
			}
			step = 3;
			break;
		}
		case 3: {
			if (sotien > budget) {
				printf("ATM khong du tien, hay nhap lai so tien nho hon\n");
				step = 2;
			}
			else {
				step = 4;
			}
			break;
		}
		case 4:
			printf("Ban da rut duoc %d VND \n", sotien);
			step = 5;
			break;
		case 6: {
			if (count > 3) {
				step = 5;
				printf("Ban nhap sai qua 3 lan! \n");
				break;
			}
			count++;
			int tieptuc = 0;
			printf("Ban da nhap sai mat khau! \n");
			printf("Ban co muon tiep tuc khong (1/0): ");
			if (scanf(" %d", &tieptuc) != 1) {
				printf("Invalid Input! \n");
				while (getchar() != '\n');
				break;
			}
			if (tieptuc == 1) {
				step = 1;
			}
			else {
				step = 5;
			}
			break;
		}
		default:
			step = 5;
			break;
		}
	}
	printf("Ket thuc!");
}