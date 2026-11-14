#include<stdio.h>

void Display(int iNo , int iFrequency)
{
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    int iCnt=0;
    for(iCnt=1 ; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }
}

int main()
{
    int iVlaue1=0;
    int iCount=0;

    printf("Enter a Number");
    scanf("%d",&iVlaue1);

    printf("Enter a frequency");
    scanf("%d",&iCount);

    Display(iVlaue1, iCount);


    return 0;
}