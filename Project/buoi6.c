#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<malloc.h>

/*
yeu cau nhap:
+ nhap so luong phan tu trong mang
+nhap vao gia tri cau tung phan tung
+in ra theo format{1,2,3,4,5..}
+goi ham sum de tinh tong gia tri trong mang */

int sum(int* arr, int size) {
	int sum = 0;
	for (int j = 0; j < size; j++) {
		sum += arr[j];
	}
	return sum;
}

void bai1_buoi6(){
	int* arr;
int a = 0;
printf("nhap tung so luong phan tu: ");
scanf("%d", &a);
 arr = malloc(4*a);
for (int i = 0; i <a; i++) {
	printf("nhap phan tu thu %d: ", i);
	scanf("%d", &arr[i]);
} 
printf("{");
for (int i = 0; i < a;i++) {
	printf("%d", arr[i]);
	if (i < (a - 1)) {
		printf(",");
	}

}
printf("}\n");
int x = sum(arr, a);
printf("sum: %d",x);

free(arr);


}


// khai báo kiểu dữ liệu
struct phan_so_s {
	int tu;
	int mau;

};
struct phan_so_s tich_ps(struct phan_so_s s1, struct phan_so_s s2) {
	struct phan_so_s kqTich_ps;
	kqTich_ps.tu = s1.tu * s2.tu;
	kqTich_ps.mau = s1.mau * s2.mau;
	return kqTich_ps;

	
}


typedef struct phan_so_s phan_so_t;
void bai2_buoi6() {
	int A;
	A = 1;

	 phan_so_t B;
	B.tu = 1;
	B.mau = 2;

	 phan_so_t C ;
	C.tu = 2;
	C.mau = 3;

	 phan_so_t D = tich_ps(B,C);
	printf("ket qua cua tu: %d\n", D.tu);
	printf("ket qua cua mau: %d", D.mau);
	
}

//khai bao mang chua 5 phan tu int, khoi tao gia tri ban dau cho no --> tim max
//khai bao mang chua 5 phan tu phan so, khoi tao gia tri ban dau cho no --> tim max

/** build ham tim phan so lon nhat
*/
phan_so_t tim_ps_max(phan_so_t* arr,int kich_thuoc) {
	phan_so_t kq = {0};

	float gia_tri_max = 0;
	int vi_tri_max = 0;
	for (int i = 0; i <kich_thuoc;i++){
		float gia_tri = (float)arr[i].tu / arr[i].mau;
		if (gia_tri_max < gia_tri) {
			gia_tri_max = gia_tri;
			vi_tri_max = i;
		}
	}
	kq = arr[vi_tri_max];
	return kq;
}
void bai3_buoi6() {
	
	phan_so_t arr[5] = {
		{.tu=9,.mau=4},
		{.tu = 1,.mau = 5},
		{.tu = 5,.mau = 2},
		{.tu = 1,.mau = 1}, 
		{ .tu = 3,.mau = 3},
	};
	phan_so_t ketQua = tim_ps_max(arr, 5);
	printf("tu:%d, mau:%d",  ketQua.tu, ketQua.mau);
}

typedef struct {
	char* ten;
	int tuoi;
	int gioi_tinh;  //0:nam; 1:nu
	float diem_toan;
	float diem_van;
	int loai; // 0:gioi,1:kha,2:trung binh,3:yeu
} hoc_sinh_t;

/**
* @brief tim học sinh có điểm trung bình cao nhất
* @param (hoc_sinh_t*) địa chỉ bất đầu của mảng học sinh
* @param (int) số lượng phần tử trong mảng
* @return (hoc_sinh_t) học sinh có điểm trung bình cao nhất
*/
hoc_sinh_t tim_hoc_sinh_cao_nhat(hoc_sinh_t* danh_sach, int so_luong)
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
	if (diem_trung_binh_cao_nhat<=10 && diem_trung_binh_cao_nhat>=8) {
		loai = 0;
	}
	else if (diem_trung_binh_cao_nhat>=6.5) {
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



void bai4_buoi6()
{

	// xây dựng kiểu dữ liệu để miêu tả đối tượng hoc_sinh
	//		+ tên
	//		+ điểm toán
	//		+ điểm văn
	// khai báo mảng bao gồm 5 phần tử hoc_sinh, khởi tạo giá trị ban đầu cho nó
	// viết HÀM để tìm học sinh có điểm trung bình (điểm toán + điểm văn)/2 cao nhất
	// sử dụng hàm, và in tên, điểm của học sinh này ra
	hoc_sinh_t arr[5] = {
		{.ten = "Nguyen Van A", .diem_toan = 8.0, .diem_van = 8.0,.tuoi=18,.gioi_tinh=1},
		{.ten = "Nguyen Van B", .diem_toan = 8.0, .diem_van = 8.0,.tuoi = 18,.gioi_tinh = 0},
		{.ten = "Nguyen Van C", .diem_toan = 9.0, .diem_van = 9.0,.tuoi = 18,.gioi_tinh = 1},
		{.ten = "Nguyen Van D", .diem_toan = 8.0, .diem_van = 8.0,.tuoi = 18,.gioi_tinh = 0},
		{.ten = "Nguyen Van E", .diem_toan = 10.0, .diem_van = 9.0,.tuoi = 18,.gioi_tinh = 1},
		// khởi tạo mảng chứa 3 học sinh in:" tên- tuổi - giới tính - điểm văn - điểm toán - loại của học sinh có điểm trung bình cao nhất"
	};

	hoc_sinh_t hs = tim_hoc_sinh_cao_nhat(arr, 5);
	printf("ten: %s\n diem toan: %.1f\n diem van: %.1f\n loai: %d\n tuoi: %d\ngioi tinh: %d", hs.ten, hs.diem_toan, hs.diem_van,hs.loai,hs.tuoi,hs.gioi_tinh);
}



