#include <stdio.h>
int main(){
int n;
printf("Enter rows: ");
if(scanf("%d",&n)!=1||n<=0)return 1;
for(int i=n;i>=1;i--){
for(int j=i;j<=n;j++)printf("%d",j);
printf("\n");
}
return 0;
}




#include <stdio.h>
int main(){
int n;
printf("Enter rows: ");
if(scanf("%d",&n)!=1||n<=0)return 1;
for(int i=0;i<n;i++){
for(int j=0;j<i;j++)printf(" ");
for(int k=0;k<n-i;k++)printf("*");
printf("\n");
}
return 0;
}
