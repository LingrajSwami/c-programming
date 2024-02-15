// problem statement : cube of input number

#include<stdio.h>

int calCube(int No1)
{
  auto int iValue = 0;
  
  iValue = No1*No1*No1 ;
  return iValue;

}

int main()
{
   auto int iNumber = 0;
   auto int iAns = 0;
   
   printf("enter the Number \n");
   scanf("%d",&iNumber);
    
   iAns = calCube(iNumber); 
   printf("Cube is : %d\n",iAns);
    return 0;
}