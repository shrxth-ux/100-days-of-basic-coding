#include <stdio.h>
void countTypes(char* s){
    int sp=0,dg=0,spl=0;
    for(int i=0;s[i];i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) continue;
        else if(s[i]==' ') sp++;
        else if(s[i]>='0'&&s[i]<='9') dg++;
        else spl++;
    }
    printf("Spaces:%d Digits:%d Special:%d\n",sp,dg,spl);
}
int main(){
    countTypes("Hello World! 123");
    countTypes("c_prog@2026 #C");
    return 0;
}








#include <stdio.h>
void replaceSpaces(char* s){
    for(int i=0;s[i];i++) if(s[i]==' ') s[i]='-';
    printf("%s\n",s);
}
int main(){
    char s1[]="Hello World C Programming";
    char s2[]=" Code Run ";
    replaceSpaces(s1);
    replaceSpaces(s2);
    return 0;
}

