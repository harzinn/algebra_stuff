#include <stdio.h>

int main(void)
{
    float n = 0.0;
    scanf("%f", &n);
    float x = (n*5280)/3600;
    printf("%f", x);
    return 0;
}