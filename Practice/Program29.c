#include<stdio.h>

void Dispaly(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}
int main()
{
    int iVlaue = 0;

    printf("Enter fequency :\n");
    scanf("%d", &iVlaue);

    Dispaly(iVlaue);
    return 0;
}
