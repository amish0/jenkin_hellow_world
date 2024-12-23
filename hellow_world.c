#include<stdio.h>

int add_number(int a, int b)
{
    return a+b;
}

int main()
{
    printf("\nHellow World & Welcome to Jenkin Training\n");
    int a=10;
    int b=20;
    int c;
    printf("test the addition of two number");
    c = add_number(a,b);
    printf("\naddition of two number %d and %d is %d", a, b, c);
    return 0;
}
