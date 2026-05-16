#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void giai_pt_bac_2() {
	// yêu cầu user nhập a, b, c
	int a, b, c;
	printf("Chuong Trinh giai phuong trinh bac 2 ax^2 + bx + c, hay nhap a, b, c de tiep tuc : \n");
	printf("hay nhap a: \n");
	scanf("%d", &a);
	printf("hay nhap b: \n");
	scanf("%d", &b);
	printf("hay nhap c: \n");
	scanf("%d", &c);

	int delta = b * b - 4 * a * c;
	if (delta > 0) {
		printf("phuong trinh co 2 nghiem: \n");
		float x1 = (-b - sqrt(delta)) / (2 * a);
		float x2 = (-b + sqrt(delta)) / (2 * a);
		printf("x1 = %f \n", x1);
		printf("x2 = %f \n", x2);
	}
	else if (delta == 0)
	{
		printf("phuong trinh co 1 nghiem kep: \n");
		float x = -b / (2.0f * a);
		printf("x1 = x2 = %f \n", x);
	}
	else {
		printf("phuong trinh vo nghiem \n");
	}
	printf("ban co muon tiep tuc khong(y/n): ");


}
//bài 1
void bai_1() {
	int mssv = 0;
	float gpa = 0;
	printf("Nhap ma so sinh vien: ");
	scanf(" %d", &mssv);
	printf("Nhap diem trung binh: ");
	scanf(" %f", &gpa);
	printf("MSSV: %d, GPA: %f", mssv, gpa);
}
void bai_2() {
	int a = 0, b = 0;
	printf("Nhap so nguyen a: ");
	scanf(" %d", &a);
	printf("Nhap so nguyen b: ");
	scanf(" %d", &b);

	printf("tong 2 so la: %d \n", a + b);
	printf("hieu 2 so la: %d \n", a - b);
	printf("tich 2 so la: %d \n", a * b);
	printf("thuong 2 so la: %f \n", a * 1.0f / b);
}

void bai_3() {
	int r = 0;
	float pi = 3.14;
	printf("Nhap so nguyen ban kinh hinh tron r: ");
	scanf(" %d", &r);

	printf("chu vi hinh tron la: %f \n", 2 * pi * r);
	printf("dien tich hinh tron la: %f \n", pi * r * r);
}
void bai_4() {
	int n = 0;
	printf("Nhap ki tu bat ky: ");
	scanf(" %c", &n);

	printf("dang thap phan(Decimal): %d \n", n);
	printf("dang thap luc phan(Hexadecimal): %x \n", n);
}