#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;
 for(iCnt =0; iCnt<=iNo ; iCnt++)
 {
    printf("%d \t",iCnt);
 }


}
int main()
{
    int iValue = 0;
   // char  cSymbol = '\0';

   // printf("Enter the pattern that want to display");
   // scanf("%c",&cSymbol);

     printf("Enter the number");
     scanf("%d",&iValue);
     Display(iValue);

    return 0 ;
}