// problem statement : Accept 2 values from
//  user and perform the addition

#include<stdio.h>

/*addition is a function which accepts 2 parameters as 
integers and it returns integer */
int Addition(int iNo1 ,int iNo2)
{
 int isum =0;
 isum = iNo1+iNo2;
 return isum;
}

int main()
{
 int ivalue1 =0;
 int ivalue2 = 0;
 int ians = 0;

 printf("enter first number\n");
 scanf("%d",&ivalue1);

  printf("enter second number\n");
 scanf("%d",&ivalue2);

ians = Addition(ivalue1,ivalue2);

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