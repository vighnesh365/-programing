#include<stdio.h>
int fibonacci(int i);
int main()
{
    int n, i;
    printf("Enter the number of elements you want in series :\n");
    scanf("%d", &n);
    printf("Fibonacci series is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
}
int fibonacci(int i)
{
    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return (fibonacci(i - 1) + fibonacci(i - 2));
}
