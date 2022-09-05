#include<bits/stdc++.h>
using namespace std;
float f(float x ) {

return( (x*x*x) - ( 5*x ) + 1 ) ;

}


int main(void)
{
float  x1, x2 , x , err ; 

int flag=0 , i=1; 

cout<<"Enter the intervals\n"  ; 
cin>>x1>>x2 ; 


while( f(x1) * f(x2)  > 0)
{
cout<<"Not in range \n Try Again !\n";
cout<<"Enter the new intervals"  ; 
cin>>x1>>x2 ; 
} 

cout<<x1<<"  "<<x2<<"Are in range \n";

cout<<"ENter AllOweD eRrOr\n";
cin>>err;

flag =1  ; 

while(flag == 1 ) 
{

printf(" iteration %d  : \nx0: %6.2f  %6.2f x2: %6.2f %6.2f\n",i,x1,f(x1),x2,f(x2)  );
i++;

if( f(x1) * f(x2)  > err )
{
flag =0;
cout<<"Answer RaNges beTwEen"<<x1<<x2 ; 
break ; 
}

x=(x1+x2)/2 ; 
 
 
 if( f(x) * f(x1) < 0)
 {
 x1= x;
 }

else if(f(x) * f(x2)  < 0 )
{
x2= x;
}
 
}


}





