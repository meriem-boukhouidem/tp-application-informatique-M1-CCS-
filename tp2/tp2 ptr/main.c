#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
int a = 15;
int*ptr= &a;
    printf("%d \t, %d\n" , a,&a);
    printf("%d \t, %d\n" , *ptr,ptr);
    *ptr= a+7;
    printf("%d",a);
*/
    int arr[3] = {7, 8, 9};
    int*ptr = arr;

    printf("%d , %d" , arr,ptr);


    return 0;
}
