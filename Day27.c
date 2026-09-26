#include <stdio.h>
int main(){
int num1,num2,max;
printf("Enter two numbers: ");
if(scanf("%d %d",&num1,&num2)!=2)return 1;
max=(num1>num2)?num1:num2;
while(1){
if(max%num1==0&&max%num2==0){
printf("LCM of %d and %d is %d\n",num1,num2,max);
break;
}
max++;
}
return 0;
}




#include <stdio.h>
int main(){
int num,temp,sum=0,remainder;
printf("Enter an integer: ");
if(scanf("%d",&num)!=1)return 1;
temp=num;
if(temp<0)temp=-temp;
while(temp>0){
remainder=temp%10;
sum=sum+remainder;
temp=temp/10;
}
printf("Sum of digits of %d is %d\n",num,sum);
return 0;
}
