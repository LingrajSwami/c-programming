// problem statement : Accept 2 values from
//  user and perform the addition

#include<stdio.h>

/*addition is a function which accepts 2 parameters as 
integers and it returns integer */

////////////////////////////////////////////////////////////
//
//  Function name : Addition
//  Description : it is udsed to perform addition of 2 integers
//  Input argument : integer,integer
//  output : integer
// Author :  Lingraj 
// date :    25/09/2023
//

///////////////////////////////
int Addition(int iNo1 ,int iNo2)
{
 int isum =0;   //Variable to store the value of addition
 isum = iNo1+iNo2;
 return isum;
}

///////////////////////////////////////////////////
//
// Entry point Function of an application which perfroms addition of 2 integers
//
//
//
///////////////////////////////////////////////
int main()
{
 int ivalue1 =0; // variable to store first input
 int ivalue2 = 0; // variable to store second input
 int ians = 0; // variable to store the result

 printf("enter first number\n");
 scanf("%d",&ivalue1);

  printf("enter second number\n");
 scanf("%d",&ivalue2);

ians = Addition(ivalue1,ivalue2); // function call to perform addition 

 printf("addition is : %d\n",ians);

 return 0;


}

//step 5 :test the code 
/*
test case 1 :
Input : 10 11
output : 21

 test case 2 :
Input : 12 11
output : 23
*/