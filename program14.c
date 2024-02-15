// problem statement : accept no from user and define whether it is even or odd


/*
  START 
    accept number from user
    Divide that number by 2
    if remainder is 0 then display Even 
    otherwise display odd
  STOP  
*/
#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
  if((iNo % 2) == 0)
  {
    return true;
  }
  else 
  {
    return false;
  }

}

int main()
{
   auto int iValue =0;
   auto bool bRet = false;

   printf("enter the number : \n") ;
   scanf("%d",&iValue);

   bRet = CheckEven(iValue);
   if(bRet)
   {
    printf(" %d is an even number\n",iValue);
   }
   else
   {
     printf(" %d is an odd number\n",iValue);
   }
    return 0;
}