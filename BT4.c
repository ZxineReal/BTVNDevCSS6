#include <stdio.h>
#include <math.h>

	int main(){
	float a, b, c, delta, x1, x2;
    printf("Ban hay nhap vao he so a: \t");
    scanf("%f", &a);
    printf("Ban hay nhap vao he so b: \t");
    scanf("%f", &b);
    printf("Ban hay nhap vao he so c: \t");
    scanf("%f", &c);
    
    if (a == 0) {
        printf("Khong phai phuong trinh bac hai!");
    } else {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x1);
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    }
    
	return 0;
}