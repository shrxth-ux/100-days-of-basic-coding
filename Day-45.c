#include <stdio.h>
int countFreq(char* s,char c){
    int count=0;
    for(int i=0;s[i];i++) if(s[i]==c) count++;
    return count;
}
int main(){
    printf("%d\n",countFreq("hello world",'l'));
    printf("%d\n",countFreq("programming",'g'));
    return 0;
}







#include <stdio.h>
void toggleCase(char* s){
    for(int i=0;s[i];i++){
        if(s[i]>='a'&&s[i]<='z') s[i]-=32;
        else if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
    }
    printf("%s\n",s);
}
int main(){
    char s1[]="Hello World!";
    char s2[]="C programming 123";
    toggleCase(s1);
    toggleCase(s2);
    return 0;
}

