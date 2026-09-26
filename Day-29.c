#include <stdio.h>
int main(){
int num,temp,digit,prod=1,has_odd=0;
printf("Enter an integer: ");
if(scanf("%d",&num)!=1)return 1;
temp=num<0?-num:num;
if(temp==0)prod=0;
while(temp>0){
digit=temp%10;
if(digit%2!=0){
prod*=digit;
has_odd=1;
}
temp/=10;
}
if(!has_odd)prod=0;
printf("Product of odd digits of %d is %d\n",num,prod);
return 0;
}


#include <stdio.h>
int main(){
long long bin,temp,comp=0,place=1;
int digit;
printf("Enter a binary number: ");
if(scanf("%lld",&bin)!=1)return 1;
temp=bin;
if(temp==0)comp=1;
while(temp>0){
digit=temp%10;
if(digit==0)comp+=1*place;
place*=10;
temp/=10;
}
printf("1's complement of %lld is %0*lld\n",bin,0,comp);
return 0;
}

