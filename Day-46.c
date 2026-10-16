#include <stdio.h>
#include <string.h>
void removeVowels(char* s){
    int i=0,j=0;
    while(s[i]){
        char c=s[i];
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U'){
            s[j++]=s[i];
        }
        i++;
    }
    s[j]='\0';
    printf("%s\n",s);
}
int main(){
    char s1[]="Hello World";
    char s2[]="C Programming";
    removeVowels(s1);
    removeVowels(s2);
    return 0;
}









#include <stdio.h>
void firstRepeating(char* s){
    int count[26]={0};
    for(int i=0;s[i];i++){
        if(s[i]>='a'&&s[i]<='z'){
            count[s[i]-'a']++;
            if(count[s[i]-'a']>1){
                printf("%c\n",s[i]);
                return;
            }
        }
    }
    printf("None\n");
}
int main(){
    firstRepeating("datastructures");
    firstRepeating("algorithm");
    return 0;
}

