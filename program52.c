
// input 721 then display the individual digits
#include<stdio.h>
void Display(int iNo)
{
    int iDigit = 0;
 iDigit = iNo % 10;
    printf("%d \n",iDigit); // 1
    iNo = iNo / 10 ;

    iDigit = iNo % 10;
    printf("%d \n",iDigit); // 1
    iNo = iNo / 10 ;

    iDigit = iNo % 10;
    printf("%d \n",iDigit); // 1
    iNo = iNo / 10 ;

};
int main()
{
    int iValue = 721;
   // printf("enter the number\n");
   // scanf("%d",&iValue);
    
    Display(iValue);
    return 0 ; 
}