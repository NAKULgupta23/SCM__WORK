#include <stdio.h>
#include <math.h>
int main()
{
    int i = 0, sum = 0, n, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        sum = sum * 10 + temp;
    }
    printf("%d", sum);
}