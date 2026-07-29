#include<stdio.h>

void Dispaly(int iNo)
{
    int iCnt = 0;

    // Filter
    if(iNo < 0)
    {
        printf("Invalid Input");
        return;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d: Jay Ganesh...\n",iCnt);
    }
}

int main()
{
    int iVlaue = 0;

    printf("Enter the fequency :");
    scanf("%d", &iVlaue);

    Dispaly(iVlaue);
    return 0;
}
