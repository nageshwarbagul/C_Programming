#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
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
    int iLenght = 0, iCnt = 0, iValue = 0;
    bool iRet = false;

    printf("Enter the number of elements: \n");
    scanf("%d", &iLenght);

    Brr = (int *)malloc(iLenght * sizeof(int));

    printf("Enter the Elements : \n");
    for (iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    printf("Enter the element that you want to search : \n");
    scanf("%d", &iValue);

    iRet = LinearSearch(Brr, iLenght, iValue);

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
