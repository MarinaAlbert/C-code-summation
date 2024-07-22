#include <stdio.h>
#include <stdlib.h>
//a program that takes one integer number and return 
//the summation of the numbers between 1 and the input.
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
