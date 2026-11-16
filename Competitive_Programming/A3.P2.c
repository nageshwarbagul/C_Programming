#include<stdio.h>

void DisplayFactor(int iNo)
{
    if(iNo <= 0)
    {
        iNo = - iNo;
    }
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iCnt % 2 == 0 || iCnt == 1) && (iNo % iCnt == 0))
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}