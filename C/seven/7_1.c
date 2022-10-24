#include <stdio.h>
int main()
{
    int a, b;
    int *p1, *p2;
    
    scanf("a=%d,b=%d", &a, &b);

    p1 = &a;
    p2 = &b;

    printf("*p1=%d,*p2=%d", *p1, *p2);
    

}