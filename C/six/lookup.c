#include <stdio.h>
#include <string.h>
int main()
{
    int array[10];
    int x;
    int lookup(int x);

    scanf("%d", &x);
    printf("%d", lookup(x));

    return 0;
}

int lookup(int x)
{
    int arr[10] = {1, 2, 5, 10, 17, 26, 37, 50, 65, 82};
    int c = -1;
    int i;

    if(x == arr[4])
    {
        c = 4;
    }
    else if(x > arr[4])
    {
        
        for(i = 5; i <= 9; i++)
        {
            if(x == arr[i])
            {
                c = i;
            }
        }
    }
    else
    {
        for(i = 0; i < 5; i++)
        {
            if(x == arr[i])
            {
                c = i;
            }
        }
    }
    return c;
}