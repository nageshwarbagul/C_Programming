#include <stdio.h>
#include <stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
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

    iRet = Summation(Brr, iLenght);

    printf("Summation is : %d\n", iRet);

    free(Brr);

    return 0;
}