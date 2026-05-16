#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//bài 1
void buoi4_bai_1() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		total += arr[i];
	}

	printf("Total: %d ", total);
}

void buoi4_bai_2() {
	int arr[10] = { 1,21,13,42,15,26,17,8,29,10 };
	int minValue = arr[0];
	int maxValue = arr[0];
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > maxValue) {
			maxValue = arr[i];
		}
		if (arr[i] < minValue) {
			minValue = arr[i];
		}
	}

	printf("Min: %d ", minValue);
	printf("Max: %d ", maxValue);
}

void buoi4_bai_3() {
	short x = 0x1234;
	short* pfx = &x;
	char* px = &x;
	printf("dia chi con tro x: %x \n", pfx);
	printf("gia tri con tro x: %x \n", *pfx);
	printf("gia tri con tro thap: %d \n", *px);
	printf("gia tri con tro cao: %d \n", *(px + 1));

}