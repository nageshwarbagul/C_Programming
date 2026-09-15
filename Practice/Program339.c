#include<stdio.h>

int main()
{
    int iNO = 0;
    int iDigit = 0;

    printf("Enter number :");
    scanf("%d",&iNO);

    while(iNO != 0)
    {
        iDigit = iNO % 2;
        printf("%d\n", iDigit);
        iNO = iNO / 2;
    }
    
    return 0;
}