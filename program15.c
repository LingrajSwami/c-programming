//problem statement : accept marks and full marks from user and calculte percentage

#include<stdio.h>

float CalculatePercentage(float iMarks, float iTotal)
{
   auto float fPerc = 0.0f;
   fPerc = ((iMarks/iTotal)*100) ;
   return fPerc;

}

/*
// using type casting
float CalculatePercentage(int iMarks, int iTotal)
{
   auto float fPerc = 0.0f;
   fPerc = (((float)iMarks/(float)iTotal)*100) ;
   return fPerc;

}

*/


int main()
{
  auto int iValue1 = 0;
  auto int iValue2 = 0;
  auto float fRet = 0.0f;

  printf("Enter the  marks : \n");
  scanf("%d",&iValue1);

  printf("Enter the total marks : \n");
  scanf("%d",&iValue2);

  fRet = CalculatePercentage(iValue1,iValue2);
  printf("your percentage is : %f\n",fRet);
    return 0;
}