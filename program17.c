/*

0-34 fail 
35-49 (third class)
50-59(second class)
60-74(first class)
75-100(destinction)


*/
//problem statement : (using filter)(validations) accept marks and full marks from user and calculte percentage

#include<stdio.h>

float CalculatePercentage(float iMarks, float iTotal)
{
   auto float fPerc = 0.0f;

   if((iMarks>iTotal) || (iMarks<0) || (iTotal<0))
   {
    printf("Invalid input\n");
    return fPerc;
   }
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
void Display(float fRet)
{
    if((fRet>=0)  && (fRet<=100))
   {
    if((fRet>=0) && (fRet<35))
  {

  printf("your are fail\n");
  }

  else if((fRet>=35) && (fRet<50))
  {

  printf("your are third class\n");
  }

  else if((fRet>=50) && (fRet<60))
  {

  printf("your are second class\n");
  }
  else if((fRet>=60) && (fRet<75))
  {

  printf("your are first class\n");
  }
  
  else if((fRet>=75) && (fRet<=100))
  {

  
  printf("your are Destinction\n");
  }
   }
   else{
    printf("invalid");
   }
}

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
  Display(iValue1);
  
    return 0;
}