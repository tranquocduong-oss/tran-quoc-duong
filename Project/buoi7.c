//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//#include<malloc.h>
//#include "library.h";
//
//
//void array_init(mang_co_gian* addr_ptr, int so_luong) {
//	// địa chỉ đầu mà vùng nhớ có sức chứa là soluong*4byte
//	addr_ptr->p = malloc(so_luong*4);
//	// gán số lượng
//	addr_ptr->so_luong = so_luong;
//
//}
//
//void array_set_val(mang_co_gian* addr_ptr, int index, int val) {
//	// tức là con trỏ p(địa chỉ ban đầu của vùng nhớ dành cho mảng)
//	//mình kêu con trỏ truy cập ô thứ index rồi gán cho nó giá trị mình nhập
//	addr_ptr->p[index] = val;
//
//}
//
//int array_get_val(mang_co_gian* addr_ptr, int index){
//	// lấy giá  trị tại ô cần lấy
//	int kq = (*addr_ptr).p[index];
//		return kq;
//}
//
//void array_resize(mang_co_gian* addr_ptr, int size) {
//	// cấp phát vùng nhớ mới với kích thước mới
//		// copy dữ liệu từ vùng nhớ cũ sang vùng nhớ mới
//		// gán lại số lượng phần tử với size mới;
//	// xóa vùng nhớ cũ
//	int* vung_nho_moi = malloc(4 * size);
//	int* vung_nho_cu = addr_ptr->p;
//	for (int i = 0; i < addr_ptr->so_luong;i++){
//		vung_nho_moi[i] = vung_nho_cu[i];
//		if (size<=i) {
//			break;
//		}
//
//
//	}
//	// gán lại số lượng phần tử với size mới
//	addr_ptr->p = vung_nho_moi;
//	addr_ptr->so_luong = size;
//	free(vung_nho_cu);
//
//}
//
//void array_show(mang_co_gian* addr_ptr) {
//	printf("{");
//		for (int i = 0;i < addr_ptr->so_luong;i++) {
//			printf("%d", addr_ptr->p[i]);
//			if (i < addr_ptr->so_luong-1 ) {
//				printf(",");
//			}
//		}
//		printf("}");
//	 
//}
//
//
//int array_sum(mang_co_gian* add_ptr) {
//	int sum = 0;
//	for (int i = 0;i < add_ptr->so_luong;i++) {
//		sum += add_ptr->p[i];
//	}
//	return sum;
//}
//
//
//
//
//
//
//
//void bai1_buoi7() {
//	/*
//	khai báo mảng co giãn có 3 phần tử
//	set giá trị cho 3 phần tử
//	in ra 3 phàn tử
//	tính tổng*/
//	mang_co_gian A;
//	 array_init(&A, 3);
//	 array_set_val(&A, 0, 1);
//	 array_set_val(&A, 1, 2);
//	 array_set_val(&A, 2, 3);
//	 array_show(&A);
//	 array_resize(&A, 1);
//}
//
//	 //linked_list
//	 typedef struct {
//		 void* next_node;// địa chỉ của node kế tiếp
//		 int value_node;// giá trị của node
//
//	 }node;
//
//	 typedef struct {
//		 node* root_node;
//		 int size;
//	 }linked_list;
//	 // khoi tao linked-list
//	 void linked_list_init(linked_list* linkl) {
//		 linkl->root_node = NULL;
//		 linkl->size = 0;
//	 }
//
//	 //viết hàm để thêm một node vào cuối linked_list
//	 void linked_list_add_node(linked_list* linkl, int val) {
//	 
//		 node* n = malloc(sizeof(node));
//		 n->value_node = val;
//		 n->next_node = NULL;
//		 if (linkl->root_node == NULL) {
//			 linkl->root_node = n;
//		 }
//		 else{ 
//			 node* temp = linkl->root_node;
//			 for (int i = 0;i < val;i++) {
//				 temp = (node*)(temp->next_node);
//			 }
//			 temp->next_node=n;
//		 
//		 }
//		 linkl->size++;
//
//	 }
//// viet ham de doc gia tri cua 1 node trong linked-list
//	 int linked_list_get_val(linked_list* linkl, int index){
//
//	 }
//
//
//
//
//
//
//
//
//
//
