#include<stdio.h>
#include<stdbool.h>

void DisplayFactor(int iNo1 )
{
    int iCnt = 0;
     printf("factor of %d\n",iNo1);
    for(iCnt = 1 ; iCnt< iNo1 ; iCnt++)
    {
        if((iNo1 % iCnt)==0)
        {
            printf("%d \n",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0;
   
     
    printf("Enter the  number : \n");
    scanf("%d",&iValue1);

   DisplayFactor(iValue1);
   return 0;
     
    
}