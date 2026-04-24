#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void giai_pt_bac2()
{
	//yeu cau nhap a, b, c
	int a, b, c;
	printf("chuong trinh giai pt bac 2: ax^2 + bx + c =0 \n");
	printf(" nhap a: ");
	scanf("%d", &a);
	printf(" nhap b: ");
	scanf("%d", &b);
	printf(" nhap c: ");
	scanf("%d", &c);
	int delta = b * b - 4 * a * c;
	// xet th1:
	if (delta > 0) {
		float x1 = (((-b) - sqrt(delta)) / (2.0f * a));
		float x2 = (((-b) + sqrt(delta)) / (2.0f * a));
		printf("nghiem x1: %f", x1);
		printf("nghiem x2: %f", x2);

	}
	else if (delta == 0) {
		float x3 = (-b / (2.0f * a));
		printf("nghiem kep: %f /n, x3");
	}
	else
	{
		printf("pt vo nghiem");
	}

	//bai 1

}


void mssv() {
	int mssv = 0;
	float gpa = 0;
	printf("mssv: ");
	scanf("%d", &mssv);
	printf("gpa: ");
	scanf("%f", &gpa);
	printf("mssv: %d , gpa: %f", mssv, gpa);
}
// bai 2
void tinh_toan() {
	int a = 0;
	int b = 0;
	printf("nhap so a:");
	scanf("%d", &a);
	printf("nhap so b:");
	scanf("%d", &b);
	printf("tong:%d\n", a + b);
	printf("hieu:%d\n", a - b);
	printf("tich:%d\n", a * b);
	printf("thuong:%f\n", a / (b * 1.0f));
}
//bai 3
void hinh_tron() {
	float r = 0;
	float pi = 3.14;
	printf(" ban kinh:");
	scanf("%f", &r);
	printf("chu vi: %f \n", 2 * pi * r);
	printf("dien tich: %f \n", pi * r * r);

}
//bai 4
void ki_tu() {
	int c = 0;
	printf("nhap ki tu:");
	scanf("%c", &c);
	printf(" he so decimal: %d \n", c);
	printf(" he so hexal: %x \n", c);

}
//bai5

void dich_trai() {
	int a = 0;
	printf("nhap a:");
	scanf("%d", &a);
	printf("dich trai x2:%d", a << 1);
	printf("dich trai x4:%d", a << 2);
	printf("dich trai x8 :%d", a << 3);


}
// bai 6
void dich_phai() {
	int a = 0;
	printf("nhap a:");
	scanf("%d", &a);
	printf("dich phai:2:%d", a >> 1);
	printf("dich phai :4:%d", a >> 2);
}
// bai 7
void doia_b() {
	int a, b;
	printf("nhap a va b: ");
	scanf("%d,%d", &a, &b);
	printf("a truoc khi doi =%d, b truoc khi doi = %d\n", a, b);
	//doi bang ham xor
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a sau khi doi =%d, b sau khi doi =%d", a, b);

}
//bai8
void bit_or() {
	int n;
	printf("nhap so n: ");
	scanf("%d", &n);
	// de cho bit 0 va bit 3 luon bat 1
	n = n | (1 << 0) | (1 << 3);
	printf("bit n sau khi dich chuyen la: %x", n);
}
//bai 9
void bit_and() {
	int n;
	printf("nhap so n:");
	scanf("%d", &n);
	//xoa bit 0 thanh 0
	n = n & ~(1 << 0);
	printf("bit 0 ve 0:%x", n);
}
//bai 10
void hex_dec() {
	int a, b;
	printf("nhap a va  b:");
	scanf("%d,%d", &a, &b);
	printf("and: a&b: %d | 0x%x\n", a & b, a & b);
	printf("xor: a^b: %d | 0x%x\n", a ^ b, a ^ b);
	printf("not: ~a: %d | 0x%x\n", ~a, ~a);
	printf("or: a|b: %d | 0x%x", a | b, a | b);

}