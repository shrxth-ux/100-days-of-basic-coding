#include <stdio.h>
#include <math.h>
int main(){
int num,temp,first,last,digits,swapped;
printf("Enter a number: ");
if(scanf("%d",&num)!=1)return 1;
temp=num<0?-num:num;
if(temp<10){
printf("Swapped number: %d\n",num);
return 0;
}
last=temp%10;
digits=(int)log10(temp);
first=temp/pow(10,digits);
swapped=last*pow(10,digits);
swapped+=temp%(int)pow(10,digits);
swapped-=last;
swapped+=first;
if(num<0)swapped=-swapped;
printf("Swapped number: %d\n",swapped);
return 0;
}




#include <stdio.h>
int main(){
int num,sum=0;
printf("Enter a number: ");
if(scanf("%d",&num)!=1)return 1;
if(num<=0){
printf("%d is not a perfect number.\n",num);
return 0;
}
for(int i=1;i<=num/2;i++){
if(num%i==0)sum+=i;
}
if(sum==num)printf("%d is a perfect number.\n",num);
else printf("%d is not a perfect number.\n",num);
return 0;
}
