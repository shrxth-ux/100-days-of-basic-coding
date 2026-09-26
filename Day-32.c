#include <stdio.h>
int main(){
int n;
double sum=0.0;
printf("Enter number of terms: ");
if(scanf("%d",&n)!=1||n<=0)return 1;
for(int i=1;i<=n;i++){
double num=2*i;
double den=4*i-1;
sum+=num/den;
}
printf("Sum of series up to %d terms is %.6f\n",n,sum);
return 0;
}





#include <stdio.h>
int main(){
int n;
printf("Enter size: ");
if(scanf("%d",&n)!=1||n<=0)return 1;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)printf("*");
printf("\n");
}
return 0;
}
