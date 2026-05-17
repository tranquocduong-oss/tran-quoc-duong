#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//Nhóm1
void bai1_1buoi4() {
    int n, arr[500];
    printf("Nhap so phan tu: "); scanf("%d", &n);

    for (int i = 0; i < n; i++) { // Chạy từ 0 đến n-1
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
    }

    printf("Mang in nguoc lai:\n");
    for (int i = n - 1; i >= 0; i--) { 
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}


void bai1_2buoi4() {
    int n, arr[500], tong = 0;
    printf("Nhap so phan tu: "); scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
        tong += arr[i]; 
    }
    float trung_binh = (float)tong / n;

    printf("Tong = %d\n", tong);
    printf("Trung binh cong = %.2f\n", trung_binh);
}

void bai1_3buoi4() {
    int n, arr[500];
    printf("Nhap so phan tu: "); scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Min: %d\nMax: %d\n", min, max);
}


void bai1_4buoi4() {
    int n, arr[500];
    int duong = 0, am = 0, khong = 0;
    printf("Nhap so phan tu: "); scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
     
        if (arr[i] == 0) khong++;
        else if (arr[i] > 0) duong++;
        else am++;
    }
    printf("So phan tu = 0: %d\n", khong);
    printf("So phan tu duong: %d\n", duong);
    printf("So phan tu am: %d\n", am);
}

void bai1_5buoi4() {
    int n, x, arr[500], vi_tri = -1; 
    printf("Nhap so phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
    }
    printf("Nhap so can tim vi tri: "); scanf("%d", &x);

    // Duyệt từ cuối mảng về đầu, gặp phát là lấy luôn index cuối cùng
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == x) {
            vi_tri = i;
            break; // Tìm thấy vị trí cuối cùng rồi thì dừng lặp luôn
        }
    }
    if (vi_tri != -1) printf("Vi tri x cuoi cung: %d\n", vi_tri);
    else printf("Khong tim thay x trong mang.\n");
}


//Nhóm2
void bai2_1buoi4() {
    int n, arr[500];
    printf("Nhap so phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
        if (arr[i] < 0) arr[i] = 0;
    }
    printf("Mang sau khi bien doi:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void bai2_2buoi4() {
    int n, arr[500];
    printf("Nhap so phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i += 2) {
        arr[i] += 2;
    }
    printf("Mang sau khi tang:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}


void bai2_3buoi4() {
    int n, arr[500];
    printf("Nhap so phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
    }

    int left = 0, right = n - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++; right--;
    }
    printf("Mang sau khi dao nguoc:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void bai2_4buoi4() {
    int n, arrA[500], arrB[500], arrC[500];
    int nB = 0, nC = 0;
    // nB, nC dùng làm biến đếm số lượng phần tử mảng B và C

    printf("Nhap so phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arrA[%d] = ", i); scanf("%d", &arrA[i]);

        if (arrA[i] % 2 == 0) {
            arrB[nB] = arrA[i];
            nB++; // Tăng kích thước mảng B
        }
        else {
            arrC[nC] = arrA[i];
            nC++; // Tăng kích thước mảng C
        }
    }

    printf("Mang B (chan): ");
    for (int i = 0; i < nB; i++) printf("%d ", arrB[i]);

    printf("\nMang C (le): ");
    for (int i = 0; i < nC; i++) printf("%d ", arrC[i]);
    printf("\n");
}


void bai2_5buoi4() {
    int n;
    float arr[500]; // Đổi mảng thành kiểu float ngay từ đầu để lưu kết quả chia
    printf("Nhap so phan tu: "); scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%f", &arr[i]);
    }

    float max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }

    printf("Max la: %.2f. Mang sau khi chuan hoa:\n", max);
    for (int i = 0; i < n; i++) {
        arr[i] /= max;
        printf("arr[%d] = %.2f\n", i, arr[i]);
    }
}

//nhóm3
void bai3_1buoi4() {
    int n, arr[500], check = 1; // Giả định ban đầu là mảng tăng (1)
    printf("Nhap so phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) { // Chỉ cần 1 cặp vi phạm là mảng không tăng
            check = 0;
            break; // Thoát luôn không cần kiểm tra tiếp
        }
    }
    if (check) printf("Mang TANG dan.\n");
    else printf("Mang KHONG tang dan.\n");
}

// Sắp xếp nổi bọt (Bubble Sort)
void bai3_2buoi4() {
    int n, arr[500];
    printf("Nhap so phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
    }

    // Bubble Sort chuẩn: chạy từ i đến n-1
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void bai3_3buoi4() {
    int n, arr[500], da_dem[500] = { 0 }; // Mảng đánh dấu để tránh đếm trùng
    printf("Nhap so phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (da_dem[i] == 1) continue; 

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                da_dem[j] = 1; 
            }
        }
        printf("Phan tu %d xuat hien %d lan\n", arr[i], count);
    }
}

// Số nguyên tố trong mảng
void bai3_4buoi4() {
    int n, arr[500], tong_snt = 0;
    printf("Nhap so phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
    }

    printf("Cac so nguyen to co trong mang: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] < 2) continue;

        int la_snt = 1;
        for (int j = 2; j <= sqrt(arr[i]); j++) { 
            if (arr[i] % j == 0) {
                la_snt = 0;
                break;
            }
        }
        if (la_snt) {
            printf("%d ", arr[i]);
            tong_snt += arr[i];
        }
    }
    printf("\nTong cac so nguyen to: %d\n", tong_snt);
}

// Xóa phần tử tại vị trí k
void bai3_5buoi4() {
    int n, k, arr[500];
    printf("Nhap so phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri muon xoa (0 -> %d): ", n - 1); scanf("%d", &k);

    // Dồn các phần tử phía sau lên trước
    for (int i = k; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Giảm số lượng phần tử của mảng đi 1

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

//  Chèn phần tử x vào vị trí k
void bai3_6buoi4() {
    int n, x, k, arr[500];
    printf("Nhap so phan tu ban dau: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i); scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri muon chen (x): "); scanf("%d", &x);
    printf("Nhap vi tri muon chen (k): "); scanf("%d", &k);

    // Dịch các phần tử từ cuối mảng lùi ra sau để tạo chỗ trống tại k
    for (int i = n; i > k; i--) {
        arr[i] = arr[i - 1];
    }
    arr[k] = x; // Đặt x vào vị trí k
    n++; // Tăng kích thước mảng lên 1

    printf("Mang sau khi chen: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}


//nhosm4 ma trận
void bai4_1buoi4() {
    int m, n, arr[50][50]; 
    printf("Nhap so dong, so cot: "); scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d] = ", i, j); scanf("%d", &arr[i][j]);
        }
    }
    printf("Ma tran da nhap:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]); // Dùng \t để căn đều cột thẳng hàng
        }
        printf("\n");
    }
}


void bai4_2buoi4() {
    int m, n, arr[50][50];
    printf("Nhap so dong, so cot: "); scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d] = ", i, j); scanf("%d", &arr[i][j]);
        }
    }

    // Tính tổng từng hàng
    for (int i = 0; i < m; i++) {
        int tong_hang = 0;
        for (int j = 0; j < n; j++) tong_hang += arr[i][j];
        printf("Tong hang %d: %d\n", i, tong_hang);
    }

    // Tính tổng từng cột
    for (int j = 0; j < n; j++) {
        int tong_cot = 0;
        for (int i = 0; i < m; i++) tong_cot += arr[i][j];
        printf("Tong cot %d: %d\n", j, tong_cot);
    }
}


void bai4_3buoi4() {
    int n, arr[50][50], tong_dc = 0;
    printf("Nhap cap ma tran vuong n: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d] = ", i, j); scanf("%d", &arr[i][j]);
        }
    }

    // Đường chéo chính luôn có chỉ số dòng = chỉ số cột (i == j)
    // Thay vì chạy 2 vòng lặp lồng nhau, ta chỉ cần 1 vòng lặp arr[i][i] để tối ưu!
    for (int i = 0; i < n; i++) {
        tong_dc += arr[i][i];
    }
    printf("Tong duong cheo chinh: %d\n", tong_dc);
}


void bai4_4buoi4() {
    int m, n, arrA[50][50];
    printf("Nhap so dong, so cot: "); scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("arrA[%d][%d] = ", i, j); scanf("%d", &arrA[i][j]);
        }
    }

    printf("Ma tran chuyen vi:\n");
    // Ma trận chuyển vị đổi dòng thành cột nên vòng j (cột cũ) sẽ chạy trước
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("%d\t", arrA[i][j]);
        }
        printf("\n");
    }
}