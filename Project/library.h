#pragma once
void my_funtion();
void giai_pt_bac_2();
void bai_1();
void bai_2();
void bai_3();
void bai_4();
void buoi3_bai_1();
void buoi3_bai_2();
void buoi3_bai_3();
void buoi3_bai_4();
void buoi3_bai_5();
void buoi3_bai_6();
void buoi3_bai_7();
void buoi4_bai_1();
void buoi4_bai_2();
void buoi4_bai_3();
void vidu1();
void bai1_buoi5();
void bai2_buoi5();
void bai3_buoi5();
void bai1_buoi5_2();
void bai2_buoi5_2();
int tich_2so(int so_nguyen_1, int so_nguyen_2);
int cong_so_nguyen(int so_nguyen_1, int so_nguyen_2);
//btvn buoi 2
void bai1buoi2();
void bai2buoi2();
void bai3buoi2();
void bai4buoi2();
void bai5buoi2();
void bai6buoi2();
void bai7buoi2();
void bai8buoi2();
void bai9buoi2();
void bai10buoi2();
void bai11buoi2();
void bai12buoi2();
void bai13buoi2();
void bai14buoi2();
void bai15buoi2();
void bai16buoi2();
void bai17buoi2();
void bai18buoi2();
void bai19buoi2();
void bai20buoi2();
//btvn Buổi 3
//nhom1 buoi3
void bai1_buoi3_1();
void bai2_buoi3_1();
void bai3_buoi3_1();
void bai4_buoi3_1();
void bai5_buoi3_1();
//nhom2 buoi3
void bai1_buoi3_2();
void bai2_buoi3_2();
void bai3_buoi3_2();
void bai4_buoi3_2();
void bai5_buoi3_2();
//nhom3 buoi3
void bai1_2_buoi3_3();
void bai3_buoi3_3();
void bai4_buoi3_3();
void bai5_buoi3_3();
void bai6_buoi3_3();
//nhom4 buoi3
void bai1_buoi3_4();
void bai2_buoi3_4();
void bai3_buoi3_4();
void bai4_buoi3_4();
//btvnBuoi4
//nhóm1
void bai1_1buoi4();
void bai1_2buoi4();
void bai1_3buoi4();
void bai1_4buoi4();
void bai1_5buoi4();
//nhóm2
void bai2_1buoi4();
void bai2_2buoi4();
void bai2_3buoi4();
void bai2_4buoi4();
void bai2_5buoi4();
//nhóm3
void bai3_1buoi4();
void bai3_2buoi4();
void bai3_3buoi4();
void bai3_4buoi4();
void bai3_5buoi4();
void bai3_6buoi4();
//nhóm4
void bai4_1buoi4();
void bai4_2buoi4();
void bai4_3buoi4();
void bai4_4buoi4();
//BTVN buoi5
int my_strlen(char* s);
void  btvn2_buoi5();
char* find_Char(char* s);
void btvn3_buoi5();
void noi_chuoi(char* s, char* t);
void btvn4_buoi5();

void btvn5_buoi5();
int kiem_tra_chuoi_con(char* A, char* B);
// buoi 6
void bai1_buoi6();
int tich_ps(struct phan_so_s s1, struct phan_so_s s2);
void bai2_buoi6();
void bai3_buoi6();
//buoi7
/*
struct để miêu tả mãng co giãn:
input: địa chỉ vùng nhớ, input: sluong ptu
*/
typedef struct
{
	int* p;// địa chỉ vùng nhớ
	int so_luong;// số lượng phần tử trong mảng
} mang_co_gian;
void array_init(mang_co_gian* addr_ptr, int so_luong);
void array_set_val(mang_co_gian* addr_ptr, int index, int val);
int array_get_val(mang_co_gian* addr_ptr, int index);
void array_resize(mang_co_gian* addr_ptr, int size);
void array_show(mang_co_gian* addr_ptr);
int array_sum(mang_co_gian* add_ptr);
void bai1_buoi7();
//btvn buoi7
typedef struct
{
	void* next_node;	// địa chỉ của node kế tiếp
	int value;			// giá trị của node
}node;
// tạo struct để miểu tả đối tượng là linked_list
typedef struct
{
	node* root_node; // địa chỉ của node đầu tiên.
	int size;		 // số lượng node
} linked_list;
//  khởi tạo linked_list
void linked_list_init(linked_list* ll);
void linked_list_add_node(linked_list* ll, int val);
int linked_list_get_val(linked_list* ll, int index);
void linked_list_show_all_node(linked_list* ll);
void linked_list_remove_node(linked_list* ll, int index);
void linked_list_insert_node(linked_list* ll, int index, int val);
void bai1_buoi7_btvn();


