#include <stdio.h>
int main()
{
    float a, b, c, d, e, f, g, h, i, j;
    float avg, sum;
    scanf("%f%f%f%f%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    sum = a + b + c + d + e + f + g + h + i + j;
    avg = sum / 10;
    printf("%f", avg);
}