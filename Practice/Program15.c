#include<stdio.h>
#include<stdbool.h>

bool checkEvenOdd(int iNo)
{
   int iRemainder = 0;
   iRemainder = iNo % 2;

   if(iRemainder == 0)
   {
    return true;
   }
   else
   {
    return false;
   }
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number to check  it is Even or Odd : ");
    scanf("%d",&iValue);

    bRet = checkEvenOdd(iValue);
    
    if(bRet == true)
    {
        printf("%d is Even",iValue);
    }
    else
    {
        printf("%d is Odd",iValue);
    }
    return 0;
}