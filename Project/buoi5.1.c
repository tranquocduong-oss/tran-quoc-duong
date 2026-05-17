
//String-chuỗi, kết thúc bằng ký tự cso giá trị=0 (ký tự kết thúc chuỗi)
//ký tự được lưu trong bộ nhớ máy tính bằng mã ASCII, cần 1 byte để lưu 1 ký tự và kiểu dữ liệu char, sinh ra để lưu ký tự
// để thể hiện ký tự, ta chứa nó trong cặp dấu ''
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void vidu1() {
	char c = 97;
	printf(" c co gia tri la: %d\n", c);
	printf(" c co gia tri la: %c", c);
}
void bai1_buoi5() {
	char string[] = "hello";
	int count = 0;
	char* pstr = string;
	while(*(pstr++)!=0){
		count++;
	}
	printf("%d",count);

	
}

void bai2_buoi5(){
	char str[] = "hello World 123";
	char* p = str;
	while (*(p)!= 0) {
		if (*(p) >= 97 && *(p) <= 122) {
			*(p) -= 32;
		}
		p++;
	}
	printf("%s",str);
}

void bai3_buoi5(){
	char string[] = "hello";
	char* p = "hello";
	char* p1 = string;
	printf("%s\n", "hello");
	printf("%x\n", p);
	printf("%x", p1);


}
