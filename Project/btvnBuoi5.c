#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//### Nhóm 3: Con trỏ và Chuỗi(Strings)
//
//* *Mục tiêu : **Thao tác với mảng ký tự kết thúc bằng 0.
//
//1. * *Độ dài chuỗi : **Viết hàm `my_strlen(char* s)` không dùng thư viện `string.h`.
//2. * *Viết hoa chuỗi : **Dùng con trỏ để duyệt và chuyển các ký tự thường thành ký tự hoa.
//3. * *Tìm ký tự : **Viết hàm tìm vị trí xuất hiện đầu tiên của một ký tự trong chuỗi(trả về con trỏ trỏ đến vị trí đó).
//4. * *Nối chuỗi : **Viết hàm nối hai chuỗi sử dụng con trỏ.
//5. * *Kiểm tra chuỗi con : **Kiểm tra chuỗi B có xuất hiện trong chuỗi A hay không bằng con trỏ.

#include "library.h"
//BTVN BUOI 5
//.** Độ dài chuỗi : **Viết hàm `my_strlen(char* s)` không dùng thư viện `string.h`.
int my_strlen(char* s) {
	int count = 0;
	while (s[count] != 0) {
		count++;

	}
	return count;
}

//2. * *Viết hoa chuỗi : **Dùng con trỏ để duyệt và chuyển các ký tự thường thành ký tự hoa.
void  btvn2_buoi5() {
	char arr[] = "pratice Makes PErfect";
	char* p = arr;
	while (*(p)!=0) {
		if (*(p)>=97 && *(p)<=122) {
			*p-= 32;
		}
		p++;
	}
	printf("Ky tu viet hoa :%s",arr);
	

}
// 3. * *Tìm ký tự : **Viết hàm tìm vị trí xuất hiện đầu tiên của một ký tự trong chuỗi(trả về con trỏ trỏ đến vị trí đó)
char* find_Char(char* s) {
    while (*s != '\0') {
        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) {
            return s;
        }
        s++;
    }
    return NULL;
}

void btvn3_buoi5() {
    char chuoi[] = "123hello";
    char* p = find_Char(chuoi);
    if (p != NULL) {
        printf("Ki tu chu cai dau tien la: %c (vi tri: %d)\n", *p, (int)(p - chuoi));
    } 
}
//4. * *Nối chuỗi : **Viết hàm nối hai chuỗi sử dụng con trỏ.

void noi_chuoi(char* s, char* t){
	while (*s!='\0') {
		s++;
	}
	*s = ' ';
	s++;
	while (*t != '\0') {
		*s = *t;
		s++;
		t++;
	}
	*s = '\0';
}

void btvn4_buoi5() {
	char a[100] = "hello";
	char b[] = "Quoc Duong";
	noi_chuoi(a, b);
	printf("chuoi : %s", a);
}

//5. * *Kiểm tra chuỗi con : **Kiểm tra chuỗi B có xuất hiện trong chuỗi A hay không bằng con trỏ.
int kiem_tra_chuoi_con(char* A, char* B) {
   // b rỗng==> trả về true
    if (*B == '\0') {
        return 1;
    }

    while (*A != '\0') {

        // thấy 1 ký tự giống 
        if (*A == *B) {

           
            char* checkA = A; // xét A
            char* checkB = B; // Xét B
            // xét từng ký tự
            while (*checkA != '\0' && *checkB != '\0' && *checkA == *checkB) {
                checkA++; 
                checkB++; 
            }

           
            if (*checkB == '\0') {
                return 1; 
            }
        }

        
        A++;
    }

    
    return 0;
}

void btvn5_buoi5() {
    char a[100] = " xin chao user";
    char b[50] = "usb";

    // Hứng kết quả số 1 hoặc số 0 từ hàm ném về để đưa ra quyết định
    if (kiem_tra_chuoi_con(a, b) == 1) {
        printf("Chuoi \"%s\" CO xuat hien trong chuoi \"%s\"\n", b, a);
    }
    else {
        printf("Chuoi \"%s\" KHONG xuat hien trong chuoi \"%s\"\n", b, a);
    }
}



