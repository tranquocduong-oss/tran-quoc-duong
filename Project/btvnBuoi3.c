#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void bai1_buoi3_1() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

void bai2_buoi3_1() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

void bai3_buoi3_1() {
    int n;
    int S = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        S += i * i;
    }
    printf("S = %d\n", S);
}

void bai4_buoi3_1() {
    int n;
    float S = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        S += (float)1 / i;
    }
    printf("S = %f\n", S);
}

void bai5_buoi3_1() {
    int a, b, k;
    printf("Nhap a, b, k: ");
    scanf("%d %d %d", &a, &b, &k);

    for (int i = a; i <= b; i += k) {
        printf("%d ", i);
    }
    printf("\n");
}
//nhom2
void bai1_buoi3_2() {
    int n;
    int count = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    while (n > 0) {
        count++;
        n /= 10;
    }
    printf("So chu so: %d\n", count);
}


void bai2_buoi3_2() {
    int n;
    int S = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    while (n > 0) {
        int chu_so = n % 10;
        if (chu_so % 2 != 0) {
            S += chu_so;
        }
        n /= 10;
    }
    printf("Tong cac chu so le: %d\n", S);
}

void bai3_buoi3_2() {
    int n;
    int max = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    while (n > 0) {
        int chu_so = n % 10;
        if (chu_so > max) {
            max = chu_so;
        }
        n /= 10;
    }
    printf("Chu so lon nhat: %d\n", max);
}

void bai4_buoi3_2() {
    int n;
    int reversed = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    while (n > 0) {
        int chu_so = n % 10;
        reversed = reversed * 10 + chu_so;
        n /= 10;
    }
    printf("So dao nguoc: %d\n", reversed);
}

void bai5_buoi3_2() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int goc = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    if (goc == reversed) {
        printf("%d la so doi xung\n", goc);
    }
    else {
        printf("%d khong phai so doi xung\n", goc);
    }
}
//nhom3
void bai1_2_buoi3_3() {
    int a, b;
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);

    int tich = a * b;

    while (b != 0) {
        int du = a % b;
        a = b;
        b = du;
    }
    int ucln = a;
    int bcnn = tich / ucln;

    printf("UCLN = %d\n", ucln);
    printf("BCNN = %d\n", bcnn);
}

void bai3_buoi3_3() {
    int n;
    int S = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            S += i;
        }
    }

    if (S == n) printf("%d la so hoan hao\n", n);
    else printf("%d khong phai so hoan hao\n", n);
}

void bai4_buoi3_3() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Cac so nguyen to <= %d: ", n);
    for (int i = 2; i <= n; i++) {
        int la_nguyen_to = 1;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                la_nguyen_to = 0;
                break;
            }
        }

        if (la_nguyen_to == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void bai5_buoi3_3() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int t1 = 1, t2 = 1;

    printf("%d so dau tien cua day Fibonacci: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        int tiep_theo = t1 + t2;
        t1 = t2;
        t2 = tiep_theo;
    }
    printf("\n");
}

void bai6_buoi3_3() {
    int n;
    float tong_pi_chia_4 = 0;
    int dau = 1;

    printf("Nhap n so hang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        tong_pi_chia_4 += (float)dau / (2 * i + 1);
        dau = -dau;
    }

    float pi = tong_pi_chia_4 * 4;
    printf("Gia tri xap xi cua Pi: %f\n", pi);
}

//nhom4


void bai1_buoi3_4() {
    int r, h;
    printf("Nhap chieu rong r va chieu cao h: ");
    scanf("%d %d", &r, &h);

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= r; j++) {
            printf(". ");
        }
        printf("\n");
    }
}
void bai2_buoi3_4() {
    int a;
    printf("Nhap canh a: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            printf(". ");
        }
        printf("\n");
    }
}

void bai3_buoi3_4() {
    int a;
    printf("Nhap canh a: ");
    scanf("%d", &a);

    for (int i = a; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf(". ");
        }
        printf("\n");
    }
}

void bai4_buoi3_4() {
    int h;
    printf("Nhap chieu cao h (so le): ");
    scanf("%d", &h);

    int nua = h / 2;

    // Nửa trên
    for (int i = 0; i <= nua; i++) {
        for (int j = 1; j <= nua - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i + 1; j++) printf(".");
        printf("\n");
    }

    for (int i = nua - 1; i >= 0; i--) {
        for (int j = 1; j <= nua - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i + 1; j++) printf(".");
        printf("\n");
    }
}