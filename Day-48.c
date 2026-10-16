#include <stdio.h>
#include <string.h>
int isRotation(char* s1,char* s2){
    int l1=strlen(s1),l2=strlen(s2);
    if(l1!=l2) return 0;
    char temp[2*l1+1];
    strcpy(temp,s1);
    strcat(temp,s1);
    return strstr(temp,s2)!=NULL;
}
int main(){
    printf("%d\n",isRotation("rotation","onrotati"));
    printf("%d\n",isRotation("abcd","acbd"));
    return 0;
}









#include <stdio.h>
#include <string.h>
void reverseWords(char* s){
    int len=strlen(s),i=0,j=0;
    while(i<len){
        while(i<len && s[i]==' ') i++;
        j=i;
        while(j<len && s[j]!=' ') j++;
        int l=i,r=j-1;
        while(l<r){
            char t=s[l];
            s[l++]=s[r];
            s[r--]=t;
        }
        i=j;
    }
    printf("%s\n",s);
}
int main(){
    char s1[]="hello world programs";
    char s2[]=" C  Strings ";
    reverseWords(s1);
    reverseWords(s2);
    return 0;
}
