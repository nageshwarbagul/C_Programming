#include<stdio.h>

void Upadate( char *str)
{
    while(*str != '\0')
    {
        if(*str == 'l')
        {
            *str = 'L';
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Upadate(Arr);

    printf("Upadate String is : %s\n",Arr);
    
    return 0;
}
