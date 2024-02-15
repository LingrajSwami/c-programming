#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
   int iCopy = iNo ;
   int iDigit = 0;

   int iRev = 0 ;
   while( iNo != 0)
   {                        //123
     iDigit = iNo %  10 ;
     iNo = iNo / 10 ;
     iRev = (iRev *10) + iDigit ;
   }
   return (iRev == iCopy);
   
}

int main()
{
    int iValue = 0;
    bool bRet  = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

  
    if(bRet)
    {  printf("%d is pallindrome",iValue);  }
    else
    {
        printf("%d is not a pallindrome",iValue);
    }

    return 0;
}