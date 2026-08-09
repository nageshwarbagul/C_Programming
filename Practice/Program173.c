#include <stdio.h>
#include <stdlib.h>

// Time complexity O(N)
int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int *Brr = NULL;
    int iLenght = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLenght);

    Brr = (int *)malloc(sizeof(int) * iLenght);

    printf("Enter the elements: \n");
    for (iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    iRet = Maximum(Brr, iLenght);

    printf("Minimum value is : %d\n", iRet);

    free(Brr);
    
    return 0;
}