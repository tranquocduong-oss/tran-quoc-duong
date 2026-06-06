#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<malloc.h>
typedef enum {
NAM,NU
}gt_t;

typedef enum {
	GIOI,KHA,TB,YEU
}loai_t;

typedef struct {
	char* ten;
	int tuoi;
	gt_t gioi_tinh;  //0:nam; 1:nu
	float diem_toan;
	float diem_van;
	loai_t loai; // 0:gioi,1:kha,2:trung binh,3:yeu
} hoc_sinh_t;

/**
* @brief tim học sinh có điểm trung bình cao nhất
* @param (hoc_sinh_t*) địa chỉ bất đầu của mảng học sinh
* @param (int) số lượng phần tử trong mảng
* @return (hoc_sinh_t) học sinh có điểm trung bình cao nhất
*/
hoc_sinh_t tim_hoc_sinh_cao_nhat1(hoc_sinh_t* danh_sach, int so_luong)
{
	int loai = 0;
	hoc_sinh_t kq;
	float diem_trung_binh_cao_nhat = 0;
	hoc_sinh_t hs_cao_nhat = { 0 };

	for (int i = 0; i < so_luong; i++)
	{
		float diem_trung_binh = (danh_sach[i].diem_toan + danh_sach[i].diem_van) / 2;
		if (diem_trung_binh_cao_nhat < diem_trung_binh)
		{
			hs_cao_nhat = danh_sach[i];
			diem_trung_binh_cao_nhat = diem_trung_binh;
		}
	}
	if (diem_trung_binh_cao_nhat <= 10 && diem_trung_binh_cao_nhat >= 8) {
		loai = 0;
	}
	else if (diem_trung_binh_cao_nhat >= 6.5) {
		loai = 1;
	}
	else if (diem_trung_binh_cao_nhat >= 5) {
		loai = 2;
	}
	else {
		loai = 3;
	}

	kq = hs_cao_nhat;
	return kq;
}

// khai báo mảng chứa 2 đối tượng là chuỗi "NAM" và "NỮ";
char* gt[] = { "NAM","NU" };
// khai báo mảng chứa 4 đối tượng là chuỗi "GIOI","KHA","TB","YEU"
char* xepLoai[] = { "GIOI","KHA","TB","YEU"};


void bai1_buoi8()
{

	// xây dựng kiểu dữ liệu để miêu tả đối tượng hoc_sinh
	//		+ tên
	//		+ điểm toán
	//		+ điểm văn
	// khai báo mảng bao gồm 5 phần tử hoc_sinh, khởi tạo giá trị ban đầu cho nó
	// viết HÀM để tìm học sinh có điểm trung bình (điểm toán + điểm văn)/2 cao nhất
	// sử dụng hàm, và in tên, điểm của học sinh này ra
	hoc_sinh_t arr[5] = {
		{.ten = "Nguyen Van A", .diem_toan = 8.0, .diem_van = 8.0,.tuoi = 18,.gioi_tinh = NU},
		{.ten = "Nguyen Van B", .diem_toan = 8.0, .diem_van = 8.0,.tuoi = 18,.gioi_tinh = NAM},
		{.ten = "Nguyen Van C", .diem_toan = 9.0, .diem_van = 9.0,.tuoi = 18,.gioi_tinh = NU},
		{.ten = "Nguyen Van D", .diem_toan = 8.0, .diem_van = 8.0,.tuoi = 18,.gioi_tinh = NU},
		{.ten = "Nguyen Van E", .diem_toan = 10.0, .diem_van = 9.0,.tuoi = 18,.gioi_tinh = NU},
		// khởi tạo mảng chứa 3 học sinh in:" tên- tuổi - giới tính - điểm văn - điểm toán - loại của học sinh có điểm trung bình cao nhất"
	};

	hoc_sinh_t hs = tim_hoc_sinh_cao_nhat1(arr, 5);
	printf("ten: %s\n diem toan: %.1f\n diem van: %.1f\n loai: %s\n tuoi: %d\ngioi tinh: %s", hs.ten, hs.diem_toan, hs.diem_van,xepLoai[hs.loai], hs.tuoi, gt[hs.gioi_tinh]);
}

void bai2_buoi8() {
	// sử dụng cái union để tách byte
	/**/
	typedef union {
		unsigned short A;
		unsigned char mang[2];
	}union_t;
	/**/
	unsigned short val = 0x1234;
	unsigned char low;
	unsigned char high;
	union_t tach_byte;
	tach_byte.A = val;
	low = tach_byte.mang[0];
	high = tach_byte.mang[1];



	printf("low: %x\n", low);
	printf("high: %x\n", high);
}
typedef union {
	struct {
		char BIT_0 : 1;
		char BIT_1 : 1;
		char BIT_2 : 1;
		char BIT_3 : 1;
		char BIT_4 : 1;
		char BIT_5 : 1;
		char BIT_6 : 1;
		char BIT_7 : 1;
	}BIT;
	unsigned char gia_tri;
}byte_t;
void bai3_buoi8() {
	byte_t A;
	A.gia_tri = 0;
}

void bai4_buoi8() {
//openfile
	/*
	* có 2 chế độ mode: 
	*1. "w": ghi file, nếu có file thì xóa file đó rồi mở file rỗng rồi nó thực hiện công việc ghi vào.
	* 2."r": có file thì nó đọc, không có file thì nó báo lỗi
	
	*/
	// mở file
	FILE* pf = fopen("C:\\hello\\helloWorld.txt","a");
	if (pf == NULL) {
		printf("Mo file that bai\n");
		return;
	}
	else {
		printf("Mo file thanh cong\n");
	}
	// read/write
	//char c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);	printf("c:%c (%d)\n", c, c);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);
	//printf("c:%c (%d)\n", c, c);
	//c = fgetc(pf);	printf("c:%c (%d)\n", c, c);
	fputc('b', pf);
	fputc('a',pf);
	fputc('n', pf);

	// close file
	fclose(pf);

}