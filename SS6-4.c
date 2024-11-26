#include <stdio.h>
int main() {
    float a, b, c, delta, x1, x2;
    printf("Moi nhap a: ");
    scanf("%f", &a);
    printf("Moi nhap b: ");
    scanf("%f", &b);
    printf("Moi nhap c: ");
    scanf("%f", &c);
    delta = b * b - 4 * a * c;
    if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x1);
    } else if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem : x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else {
        printf("Phuong trinh vo nghiem\n");
    }
    return 0;
}

