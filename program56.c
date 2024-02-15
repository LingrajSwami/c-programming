
// input 721 then display the count digit
#include<stdio.h>
void SumDigit(int iNo)
{
    int iSum = 0;
    int iDigit = 0 ;
    while(iNo != 0) // we can also put condition as iN0 > 0
    {
       // printf("...........................\n");
       // iCnt++ ;
       
   // iDigit = iNo % 10;
  //  printf("Digit is %d \n",iDigit); 
   
    iSum = iSum + (iNo % 10) ;
    iNo = iNo / 10 ;
    // printf(" value of Number %d \n",iNo);
    }
     printf(" total sum are : %d \n",iSum);


    


};
int main()
{
    int iValue = 0 ;
   printf("enter the number :\n");
   scanf("%d",&iValue);
    
    SumDigit(iValue);
    return 0 ; 
}

