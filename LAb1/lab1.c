#include<stdio.h>
#include<math.h>
int main(void)
{
float av=0,tv=0,rel_err,per_err,abs_err;

printf("Enter True Value\n");
scanf("%f",&tv);


printf("Enter approximate value\n"); 
scanf("%f",&av);

abs_err = (float)tv-av;

if(abs_err < 0 )

abs_err*=-1;

rel_err=(float)(abs_err)/(tv);
if(rel_err <0)
rel_err*=-1;

per_err = rel_err * 100;

printf("Absolute error:%6.2f\nRelative error:%6.2f\nPercentage error:%6.2f\n",abs_err,rel_err,per_err);



abs_err = fabs(tv-av);


rel_err = fabs(abs_err/tv);

per_err = fabs(rel_err * 100);


printf("Absolute error:%6.2f\nRelative error:%6.2f\nPercentage error:%6.2f\n",abs_err,rel_err,per_err);

}


// Algo
/*
step 1- start of the program 

step 2- input the variable (true value , absolute value)

step 3- calculate absolute error as abs_err=|  t_val - a_val |

step 4- calculate relative error as rel_err = |  abs_error / t_val |

step 5 - calculate percentage error/(persentage relative ) as per_err = rel_err *100 ;

step 6 - print abs_err , rel_err , per_err 

step 7 - Stop
*/
