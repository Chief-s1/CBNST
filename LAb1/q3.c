#include<stdio.h>

int main (void){
 
int num;

int sig =0 ;

printf("Enter The number\n");
scanf("%d",&num);

int tnum = num;

 while(tnum > 1)
  {
  tnum/=10; 
  sig+=1;
  }

printf("significant digit = %d\n",sig);

int sum=0;

for (int i =0 ;i < 2 ; i++)
{
sum+=(num%10);
num/=10;
}

printf("2LSD Sum =%d\n",sum);
}
