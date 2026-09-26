#include <stdio.h>
int main(){
int n;
printf("Enter rows: ");
if(scanf("%d",&n)!=1||n<=0)return 1;
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++)printf("*");
printf("\n");
}
return 0;
}





#include <stdio.h>
int main(){
int n;
printf("Enter rows: ");
if(scanf("%d",&n)!=1||n<=0)return 1;
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++)printf("%d",j);
printf("\n");
}
return 0;
}
