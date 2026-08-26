#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%s",Arr);                // Issue

    printf("Entered string is : %s", Arr);

    return 0;

}