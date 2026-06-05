#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<malloc.h>
// tạo struct để miêu tả đối tượng là node
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
void linked_list_init(linked_list* ll){
	ll->root_node = NULL;
	ll->size = 0;
}
// thêm một node vào cuối linked_list
void linked_list_add_node(linked_list* ll, int val){
	node* n = malloc(sizeof(node));
	n->value = val;
	n->next_node = NULL;
	if (ll->root_node == NULL)
	{
		ll->root_node = n;
	}
	else{
		node* temp = ll->root_node;
		for (int i = 0; i < ll->size - 1; i++){
			temp = (node*)(temp->next_node);
		}
		temp->next_node = n;
	}
	ll->size++;
}
//  đọc giá trị của một node trong linked_list
int linked_list_get_val(linked_list* ll, int index){
	node* temp = ll->root_node;
	for (int i = 0; i < index; i++){
		temp = (node*)(temp->next_node);
	}
	return temp->value;
}
//btvn
void linked_list_show_all_node(linked_list* ll) {
	node* temp = ll->root_node;
	int i = 0;
	while (temp != NULL) {
	printf("node thu %d co gia tri: %d\n", i, temp->value);
	temp = (node*)(temp->next_node); // Di chuyển tới node tiếp theo
	i++;
	}
}


void linked_list_remove_node(linked_list* ll, int index) {
	// khi index không đúng hoặc danh sách rỗng thì nó sẽ không chạy 
	if (index < 0 || index >= ll->size || ll->root_node == NULL) return;


	node* temp = ll->root_node;
	node* tempKeTruoc = temp;
	if (index==0) {
		ll->root_node =(node*)(temp->next_node);
		// giải phóng node đầu trong  linkedlist cũ
		free(temp);
		// giảm linked-list lại khi xóa
		ll->size--;                             

		return;

	}

	for (int i = 0; i < index;i++) {
		tempKeTruoc = temp;
		temp = (node*)(temp->next_node);
	}
	tempKeTruoc->next_node = temp->next_node;
	// giảm linked-list lại khi xóa
	ll->size--;
	free(temp);

}



void linked_list_insert_node(linked_list* ll, int index, int val){
	// khi index không đúng hoặc danh sách rỗng thì nó sẽ không chạy 
	if (index < 0 || index > ll->size) return;

	node* n = malloc(sizeof(node));
	n->value = val;
	n->next_node = NULL;

	node* temp = ll->root_node;
	node* tempKeTruoc = temp;

	if (index == 0) {
		ll->root_node = n;
		n->next_node = temp;
	}
	else {
		//temp sẽ dừng ở node ngay trước vị trí cần chèn
		for (int i = 0; i < index-1;i++) {
			temp = (node*)(temp->next_node);
		}
		n->next_node = temp->next_node;
		temp->next_node = n;
	}
	ll->size++;
}


void bai1_buoi7_btvn() {
	linked_list l;
	linked_list_init(&l);
	linked_list_add_node(&l, 60);
	linked_list_add_node(&l, 70);
	linked_list_add_node(&l, 80);
	linked_list_add_node(&l, 90);
	linked_list_add_node(&l, 100);

	printf("node2: %d \n", linked_list_get_val(&l, 2));
	// show all
	linked_list_show_all_node(&l);
	// xóa node 3
	linked_list_remove_node(&l, 2);
	printf("Linked-list sau khi xoa node thu 3\n");
	linked_list_show_all_node(&l);
	// insert
	printf("chen them node moi vao linked-list\n");
	linked_list_insert_node(&l, 1, 999);
	linked_list_show_all_node(&l);
}