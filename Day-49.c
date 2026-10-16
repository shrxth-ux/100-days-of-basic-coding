#include <stdio.h>
#include <ctype.h>
void printInitials(char* s){
    if(s[0]!=' ') printf("%c ",toupper(s[0]));
    for(int i=1;s[i]!='\0';i++){
        if(s[i-1]==' ' && s[i]!=' ') printf("%c ",toupper(s[i]));
    }
    printf("\n");
}
int main(){
    printInitials("mahendra singh dhoni");
    printInitials("Albert Einstein");
    return 0;
}






#include <stdio.h>
#include <ctype.h>
#include <string.h>
void printNameWithSurname(char* s){
    int len=strlen(s),lastSpace=-1;
    for(int i=0;i<len;i++) if(s[i]==' ') lastSpace=i;
    if(s[0]!=' ' && lastSpace!=0) printf("%c. ",toupper(s[0]));
    for(int i=1;i<lastSpace;i++){
        if(s[i-1]==' ' && s[i]!=' ') printf("%c. ",toupper(s[i]));
    }
    for(int i=lastSpace+1;i<len;i++){
        if(i==lastSpace+1) printf("%c",toupper(s[i]));
        else printf("%c",s[i]);
    }
    printf("\n");
}
int main(){
    printNameWithSurname("mohandas karamchand gandhi");
    printNameWithSurname("APJ Abdul Kalam");
    return 0;
}
