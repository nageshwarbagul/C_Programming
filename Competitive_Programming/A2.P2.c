#include<stdio.h>

void Display(int iNo)
{
    // updator 
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        printf("* ");
        iNo --;
    } 
    printf("\n");  
}

int main()
{

    int iValue=0;

    printf("Enter a Number");
    scanf("%d",& iValue);

    Display(iValue);

    return 0;
}