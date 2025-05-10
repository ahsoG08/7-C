#include <stdio.h>

int max(int a, int b) 
{
    return (a > b) ? a : b;
}

int main() 
{
    int num1, num2;
    
    printf("Введите два целых числа: ");
    scanf("%d %d", &num1, &num2);
    
    int result = max(num1, num2);
    printf("Максимальное число: %d\n", result);
    
    return 0;
}
