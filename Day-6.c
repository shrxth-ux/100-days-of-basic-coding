Write a program for celcius fahrenheit conversation.
  
#include <stdio.h>
  int main ()
{
float celsius;
printf ("enter temperature in celsius\n");
scanf ("%f" ,&celsius);
float fahrenheit= (celsius*(9.0/5.0))+32.0;
printf ("the given temperature in fahrenheit is %f.\n" ,fahrenheit);
return 0;
}

Write a program to swap two numbers using a third variable.

#include<stdio.h>
  int main()
{ 
int a,b,temp;
printf ("enter first digit\n");
scanf ("%d",&a);
printf ("enter second digit\n");
scanf ("%d",&b);
printf ("before swap a=%d, b=%d.\n",a,b);
  temp=a;
  a=b;
  b=temp;
printf ("after swap a=%d, b=%d.\n",a,b);
return 0;
}
