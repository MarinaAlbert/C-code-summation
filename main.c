#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0,res=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
        res+=i;
    printf("The result of summation= %d",res);
    return 0;
}
