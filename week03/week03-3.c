#include <stdio.h>
#include <string.h>
char line[2000];
char tablea[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char tableb[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror_char(char c)
{
    for(int i=0;tablea[i]!=0;i++){
        if(c==tablea[i])    return tableb[i];
    }
    return ' ';
}
int mirror()
{
    int N=strlen(line);
    for(int i=0; i<N; i++){
       if( mirror_char(line[i]) != line[N-1-i] ) return 0;
    }
    return 1;
}
int isPalindrome()
{
    int N=strlen(line);
    for(int i=0; i<N; i++){
      if( line[i] != line[N-1-i] ) return 0;
    }
    return 1;
}
int main()
{
    while(scanf("%s",line)==1){
        int p = isPalindrome();
        int m=  mirror();

        if( p==1 && m==1) printf("%s -- is a mirrored palindrome.\n\n", line);
        if( p==1 && m==0) printf("%s -- is a regular palindrome.\n\n", line);
        if( p==0 && m==1) printf("%s -- is a mirrored string.\n\n", line);
        if( p==0 && m==0) printf("%s -- is not a palindrome.\n\n", line);
    }
    return 0;
}
