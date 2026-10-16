#include <stdio.h>
#include <string.h>
int isAnagram(char* s1,char* s2){
    int count[256]={0};
    if(strlen(s1)!=strlen(s2)) return 0;
    for(int i=0;s1[i];i++){
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }
    for(int i=0;i<256;i++) if(count[i]!=0) return 0;
    return 1;
}
int main(){
    printf("%d\n",isAnagram("listen","silent"));
    printf("%d\n",isAnagram("hello","helloo"));
    return 0;
}







#include <stdio.h>
#include <string.h>
void longestWord(char* s){
    int len=strlen(s),i=0,maxLen=0,maxStart=0;
    while(i<len){
        while(i<len && s[i]==' ') i++;
        int start=i;
        while(i<len && s[i]!=' ') i++;
        int currLen=i-start;
        if(currLen>maxLen){
            maxLen=currLen;
            maxStart=start;
        }
    }
    printf("%.*s\n",maxLen,&s[maxStart]);
}
int main(){
    longestWord("Find the longest word in a sentence");
    longestWord("Programming in C is fun");
    return 0;
}
