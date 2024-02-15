
// input 721 then display the individual digits
#include<stdio.h>
void Display(int iNo)
{
    int iDigit = 0;
    while(iNo != 0) // we can also put condition as iN0 > 0
    {
        printf("...........................\n");
    iDigit = iNo % 10;
    printf("Digit is %d \n",iDigit); 
    iNo = iNo / 10 ;
     printf(" value of Number %d \n",iNo);
    }


    


};
int main()
{
    int iValue = 0 ;
   printf("enter the number :\n");
   scanf("%d",&iValue);
    
    Display(iValue);
    return 0 ; 
}