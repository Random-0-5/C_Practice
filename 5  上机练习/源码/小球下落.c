#include<stdio.h>

int main() {
    double height = 100.0;
    double sum = 0.0;

    for (int i = 1; i <= 10; i++) {
        sum += height;
        height /= 2;
 
        if (i < 10) {
            sum += height;
        }
    }

    printf("��10�����ʱ��������%.6f�ף���10�η�����%.6f��\n", sum, height);
 
    return 0;
}