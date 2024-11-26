#include <stdio.h>
int main() {
    int year, month;
    printf("Moi nhap nam: ");
    scanf("%d", &year);
    printf("Moi nhap thang: ");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("Thang %d co 31 ngay\n", month);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Thang %d co 30 ngay\n", month);
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("Thang 2 co 29 ngay\n");
        } else {
            printf("Thang 2 co 28 ngay\n");
        }
    } else {
        printf("Thang khong hop le\n");
    }
    return 0;
}

