// problem statement : Accept radius from user and calculate the area of circle

//step 1 : understand the problem statement
// Conclusion : we are going to use the formula as PI*R*R

//Step 2 : Algorithm
/*
  START
       Accept radius fro user and store into RADIUS
       Create variable as PI and store value 3.14
       Calculate area PI*RADIUS*RADIUS
       display the value of area to the user
  Stop   
    
*/

#include<stdio.h>

#define PI 3.14

float CalculateArea(float fValue)
{
  auto float fAns =0;   //Variable to store the value of addition
  //auto const float PI = 3.14f;
 fAns = PI*fValue*fValue;
 return fAns;
}

int main ()
{ 
   auto float fRadius = 0.0f;
   auto float fArea = 0.0f;


    printf("enter Radius \n");
    scanf("%f",&fRadius);

     
    

   fArea = CalculateArea(fRadius);
    printf("area is %f \n",fArea);
    return 0;
}