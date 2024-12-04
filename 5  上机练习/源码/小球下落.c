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

    printf("第10次落地时，共经过%.6f米，第10次反弹高%.6f米\n", sum, height);
 
    return 0;
}