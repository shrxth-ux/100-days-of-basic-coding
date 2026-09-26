#include <stdio.h>
int main(){
int num,temp,rem,sum=0;
printf("Enter a number: ");
if(scanf("%d",&num)!=1)return 1;
temp=num;
while(temp>0){
rem=temp%10;
int fact=1;
for(int i=1;i<=rem;i++)fact*=i;
sum+=fact;
temp/=10;
}
if(sum==num)printf("%d is a strong number.\n",num);
else printf("%d is not a strong number.\n",num);
return 0;
}



#include <stdio.h>
int main(){
int n;
double sum=0.0;
printf("Enter number of terms: ");
if(scanf("%d",&n)!=1||n<=0)return 1;
if(n>=1)sum+=1.0;
for(int i=2;i<=n;i++){
double num=2*i-1;
double den=2*i;
sum+=num/den;
}
printf("Sum of series up to %d terms is %.6f\n",n,sum);
return 0;
}


