#include <stdio.h>
#include <stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int iCnt = 0, icount = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 != 0)
        {
            icount++;
        }
    }
    return icount;
}
int main()
{
    int *Brr = NULL;
    int iLenght = 0, iCnt = 0, iRet = 0;

    printf("Enter the number of elements: \n");
    scanf("%d", &iLenght);

    Brr = (int *)malloc(iLenght * sizeof(int));

    printf("Enter the Elements : \n");

    for (iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    iRet = CountOdd(Brr, iLenght);

    printf("Odd element are : %d\n", iRet);

    free(Brr);

    return 0;
}