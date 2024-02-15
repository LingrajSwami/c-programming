// problem statement : cube of input number

#include<stdio.h>

long int calCube(int No1)
{
  auto long int iValue = 0;
  
  iValue = No1*No1*No1 ;
  return iValue;

}

int main()
{
   auto int iNumber = 0;
   auto long int iAns = 0;
   
   printf("enter the Number \n");
   scanf("%d",&iNumber);
    
   iAns = calCube(iNumber); 
   printf("Cube is : %ld\n",iAns);
    return 0;
}