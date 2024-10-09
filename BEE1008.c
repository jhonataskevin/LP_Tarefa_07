#include <stdio.h>
int main(){
    int num, h;
    float sal, total;

    scanf("%d %d %f", &num, &h, &sal);
    total=h*sal;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, total);

    return 0;
}
