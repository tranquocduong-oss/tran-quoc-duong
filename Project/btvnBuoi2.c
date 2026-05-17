#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void bai1buoi2()
{
    int n = 0;
    printf("Nhap n = ");
    scanf("%d", &n);

    // Sử dụng toán tử bitwise & thay vì %
    if ((n & 1) == 0)
    {
        printf("So n = %d la so chan.\n", n);
    }
    else
    {
        printf("So n = %d la so le.\n", n);
    }
}

void bai2buoi2()
{
    int a = 0, b = 0, c = 0, max = 0;
    printf("Nhap a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Tìm max giữa a và b
    if (a > b) {
        max = a;
    }
    else {
        max = b;
    }

    // So sánh max với c
    if (c > max) {
        max = c;
    }

    printf("MAX = %d\n", max);
}

void bai3buoi2()
{
    int nam = 0;
    printf("Moi nhap nam: ");
    scanf("%d", &nam);

    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
    {
        printf("Nam %d la nam nhuan.\n", nam);
    }
    else
    {
        printf("Nam %d khong phai nam nhuan.\n", nam);
    }
}

void bai4buoi2()
{
    float a = 0, b = 0, c = 0;
    printf("Nhap do dai 3 canh a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Gom điều kiện bằng toán tử && giúp code phẳng và dễ đọc hơn
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        printf("Tam giac hop le.\n");
    }
    else
    {
        printf("Tam giac khong hop le.\n");
    }
}

void bai5buoi2()
{
    float diem = 0;
    printf("Nhap diem cua ban (0 - 10): ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) printf("Diem so khong hop le!\n");
    else if (diem >= 9.0)  printf("Excellent\n");
    else if (diem >= 8.0)  printf("Very good\n");
    else if (diem >= 6.5)  printf("Good\n");
    else if (diem >= 5.0)  printf("Average\n");
    else                   printf("Fail\n");
}

void bai6buoi2()
{
    float a = 0, b = 0, ans = 0;
    char toan_tu = 0;

    printf("Nhap 2 so a va b: "); scanf("%f %f", &a, &b);
    printf("Nhap toan tu (+, -, *, /): "); scanf(" %c", &toan_tu);

    switch (toan_tu)
    {
    case '+':
        ans = a + b;
        printf("Ket qua: %f\n", ans);
        break;
    case '-':
        ans = a - b;
        printf("Ket qua: %f\n", ans);
        break;
    case '*':
        ans = a * b;
        printf("Ket qua: %f\n", ans);
        break;
    case '/':
        if (b != 0) {
            ans = a / b;
            printf("Ket qua: %f\n", ans);
        }
        else {
            printf("Loi: Khong the chia cho 0!\n");
        }
        break;
    default:
        printf("Invalid Operator\n");
    }
}

void bai7buoi2()
{
    int thu = 0;
    printf("Nhap vao mot so (1 - 7): ");
    scanf("%d", &thu);

    switch (thu)
    {
    case 1: printf("Sunday\n");    break;
    case 2: printf("Monday\n");    break;
    case 3: printf("Tuesday\n");   break;
    case 4: printf("Wednesday\n"); break;
    case 5: printf("Thursday\n");  break;
    case 6: printf("Friday\n");    break;
    case 7: printf("Saturday\n");  break;
    default: printf("Invalid Input\n");
    }
}

void bai8buoi2()
{
    int month = 0;
    printf("Nhap thang: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("Thang %d co 31 ngay.\n", month);
        break;
    case 4: case 6: case 9: case 11:
        printf("Thang %d co 30 ngay.\n", month);
        break;
    case 2:
        printf("Thang %d co 28 ngay.\n", month);
        break;
    default:
        printf("Thang khong hop le.\n");
    }
}

void bai9buoi2()
{
    int n = 0, k = 0;
    printf("Nhap so n = "); scanf("%d", &n);
    printf("Nhap vi tri bit k (0 - 31) = "); scanf("%d", &k);
    if (n & (1 << k))
    {
        printf("Bit %d dang ON (1).\n", k);
    }
    else
    {
        printf("Bit %d dang OFF (0).\n", k);
    }
}

void bai10buoi2()
{
    int permissions = 0;
    printf("Nhap gia tri thap phan: ");
    scanf("%d", &permissions);

    if (permissions & (1 << 1))
    {
        printf("Write Access Granted\n");
    }
    else
    {
        printf("Access Denied\n");
    }
}

void bai11buoi2()
{
    float a = 0, b = 0, c = 0;
    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        if (b == 0) {
            if (c == 0) printf("Phuong trinh vo so nghiem.\n");
            else printf("Phuong trinh vo nghiem.\n");
        }
        else {
            printf("Phuong trinh co 1 nghiem: x = %f\n", -c / b);
        }
    }
    else
    {
        float delta = b * b - (4 * a * c);
        if (delta > 0)
        {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet: x1 = %f, x2 = %f\n", x1, x2);
        }
        else if (delta == 0)
        {
            printf("Phuong trinh co 1 nghiem kep: x = %f\n", -b / (2 * a));
        }
        else
        {
            printf("Phuong trinh vo nghiem.\n");
        }
    }
}

void bai12buoi2()
{
    float luong_cb = 0, so_gio_lam = 0;
    float salary = 0, tax = 0, net_salary = 0;

    printf("Nhap luong co ban va so gio lam viec: ");
    scanf("%f %f", &luong_cb, &so_gio_lam);

    // Tính tổng lương chưa thuế
    if (so_gio_lam > 160)
    {
        float overtime = so_gio_lam - 160;
        salary = (luong_cb * 160) + (luong_cb * overtime * 1.5);
    }
    else
    {
        salary = luong_cb* so_gio_lam;
    }

    // Tính thuế dựa trên tổng lương
    if (salary > 15000000) tax = salary * 0.10;
    else                   tax = salary * 0.05;

    net_salary = salary - tax;

    printf("Tong luong: %.2f\n", salary);
    printf("Thue phai nop: %.2f\n", tax);
    printf("Luong thuc nhan (Net): %.2f\n", net_salary);
}

void bai13buoi2()
{
    float x = 0, y = 0;
    printf("Nhap toa do (x, y): ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0)   printf("Diem nam tai tam O(0,0).\n");
    else if (x != 0 && y == 0) printf("Diem nam tren truc hoanh Ox.\n");
    else if (x == 0 && y != 0) printf("Diem nam tren truc tung Oy.\n");
    else if (x > 0 && y > 0)   printf("Diem nam tai goc phan tu thu I.\n");
    else if (x < 0 && y > 0)   printf("Diem nam tai goc phan tu thu II.\n");
    else if (x < 0 && y < 0)   printf("Diem nam tai goc phan tu thu III.\n");
    else                       printf("Diem nam tai goc phan tu thu IV.\n");
}

void bai14buoi2()
{
    float height = 0, weight = 0, bmi = 0;
    printf("Nhap chieu cao (m) va can nang (kg): ");
    scanf("%f %f", &height, &weight);

    bmi = weight / (height * height);
    // lấy 2 số thập phân
    printf("Chi so BMI = %.2f -> Phay loai: ", bmi);

    if (bmi < 18.5)       printf("SUy dinh duong\n");
    else if (bmi < 25.0)  printf("Binh thuong\n");
    else if (bmi < 30.0)  printf("Thua can\n");
    else                  printf("Beo phi\n");
}

void bai15buoi2()
{
    char light = 0;
    printf("Nhap tin hieu den giao thong(do/vang/xanh): ");
    scanf(" %c", &light);

    switch (light)
    {
    case 'do': printf("Dung\n"); break;
    case 'vang': printf("di cham\n"); break;
    case 'xanh': printf("di binh thuong\n"); break;
    default:  printf("den hu\n");
    }
}

void bai16buoi2()
{
    int n = 0;
    printf("Nhap so nguyen (0-9): ");
    scanf("%d", &n);

    switch (n)
    {
    case 0: printf("Zero\n");  break;
    case 1: printf("One\n");   break;
    case 2: printf("Two\n");   break;
    case 3: printf("Three\n"); break;
    case 4: printf("Four\n");  break;
    case 5: printf("Five\n");  break;
    case 6: printf("Six\n");   break;
    case 7: printf("Seven\n"); break;
    case 8: printf("Eight\n"); break;
    case 9: printf("Nine\n");  break; // Đã sửa "Night" thành "Nine"
    default: printf("Ngoai pham vi 0-9\n");
    }
}

void bai17buoi2()
{
    int pin = 0, cash = 0;
    int balance = 5000000; 

    printf("Nhap ma PIN: "); scanf("%d", &pin);

    if (pin == 1234)
    {
        printf("Nhap so tien can rut: "); scanf("%d", &cash);

        if (cash > balance) {
            printf("Giao dich that bai: So du tai khoan khong du.\n");
        }
        else if (cash % 50000 != 0) {
            printf("Giao dich that bai: So tien rut phai la boi so cua 50.000.\n");
        }
        else {
            printf("So tien ban rut: %d\n", cash);
        }
    }
    else
    {
        printf("Giao dich that bai: Ma PIN khong dung.\n");
    }
}

void bai18buoi2()
{
    int n = 0;
    printf("Nhap so nguyen n (Chon trong cac so 1, 2, 4, 8, 16): ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:  printf("1 la luy thua bac 0 cua 2.\n"); break;
    case 2:  printf("2 la luy thua bac 1 cua 2.\n"); break;
    case 4:  printf("4 la luy thua bac 2 cua 2.\n"); break;
    case 8:  printf("8 la luy thua bac 3 cua 2.\n"); break;
    case 16: printf("16 la luy thua bac 4 cua 2.\n"); break;
    default: printf("%d khong co trong danh sach kiem tra.\n", n);
    }
}

void bai19buoi2()
{
    int gia_tri = 0;
    printf("Nhap gia tri thanh ghi= ");
    scanf("%d", &gia_tri);

    int bit = 7;
    int bitSai = 6;

    // Kiểm tra bit Power (bit 7) trước
    if ((gia_tri & (1 << bit)) == 0)
    {
        printf(" Sleep.\n");
    }
    else // Neu Power ON (bit 7 == 1)
    {
        // Kiem tra tiep bit Error (bit 6)
        if ((gia_tri & (1 <<bitSai)) == 0)
        {
            printf(" Ready.\n");
        }
        else
        {
            printf("System Failure.\n");
        }
    }
}

void bai20buoi2()
{
    char ky_tu = 0;
    printf("Nhap 1 ky tu tu ban phim: ");
    scanf(" %c", &ky_tu);

    if (ky_tu >= '0' && ky_tu <= '9')
    {
        printf("Day la: Chu so.\n");
    }
    else if (ky_tu >= 'A' && ky_tu <= 'Z')
    {
        printf("Day la: Chu cai viet hoa.\n");
    }
    else if (ky_tu >= 'a' && ky_tu <= 'z')
    {
        printf("Day la: Chu cai viet thuong.\n");
    }
    else
    {
        printf("Day la: Ky tu dac biet.\n");
    }
}
