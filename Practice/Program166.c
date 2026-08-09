#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bFlag = false;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}
int main()
{
    int *Brr = NULL;
    int iLenght = 0, iCnt = 0;
    bool iRet = false;

    printf("Enter the number of elements: \n");
    scanf("%d", &iLenght);

    Brr = (int *)malloc(iLenght * sizeof(int));

    printf("Enter the Elements : \n");
    for (iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    iRet = LinearSearch(Brr, iLenght);

    if (iRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    free(Brr);

    return 0;
}
