#include<stdio.h>
#include<stdbool.h>

int Reserse(int iNo)
{
    int iRev = 0 , iDigit = 0;
     while(iNo != 0)
     {
        iDigit = iNo % 10;
        iNo = iNo /10 ;
        iRev = (iRev * 10) + iDigit ;
     }
     return iRev;
}

int main()
{
    int iValue = 0;
    bool bRet  = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Reserse(iValue);
    printf("Reverse number is : %d\n ",iRet);


    return 0;
}