#include<stdio.h>
#include<math.h>

int main(void){

float val=0.0 ;

printf("Enter value\n");
scanf("%f",&val);


float tval=val;

printf("%.3f\n",val);

int c=0;

while(tval>1)
{
c++;
tval/=10;
}

float ttn;

for(i=0 ;i< 2 ; i++)
{
tval * =10; 
ttn = ttn + (tval);
}

printf("%f",ttn);

}
