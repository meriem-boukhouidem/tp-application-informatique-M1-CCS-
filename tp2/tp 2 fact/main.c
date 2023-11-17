#include <stdio.h>
#include <stdlib.h>
int fact(int  number )
{
 return number <= 1 ? 1 : number * fact(number - 1);
}
int main(){
printf("%d",fact(6));
}
