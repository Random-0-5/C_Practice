/*��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�*/

#include <stdio.h>

int main(void) {
    double sum = 0.0; 
    double numerator = 2.0;
    double denominator = 1.0; 

    for (int i = 0; i < 20; i++) {
        sum += numerator / denominator; 
        double temp = numerator; 
        numerator += denominator; 
        denominator = temp; 
    }

    printf("%.6lf\n", sum);
    
    return 0;
}
