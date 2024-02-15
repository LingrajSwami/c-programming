#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;
 for(iCnt =1; iCnt<=iNo ; iCnt++)
 {
    printf("* \t",iCnt);
 }
  for(iCnt =1; iCnt<=iNo ; iCnt++)
 {
    printf("* \t",iCnt);
 }
  for(iCnt =1; iCnt<=iNo ; iCnt++)
 {
    printf("* \t",iCnt);
 }


}
int main()
{
    int iValue = 0;
   // char  cSymbol = '\0';

   // printf("Enter the pattern that want to display");
   // scanf("%c",&cSymbol);

     printf("how many times to repeat it");
     scanf("%d",&iValue);
     Display(iValue);

    return 0 ;
}