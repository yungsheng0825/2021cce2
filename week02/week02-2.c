#include <stdio.h>
char table1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char table2[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror (char c)
{
    for(int i=0;table1[i]!=0;i++){
        if( c== table1[i])  return table2[i];
    }
    return ' ';
}
int main()
{
        char c;
        scanf("%c",&c);

        char ans=mirror(c);
        printf("它的鏡子字是==%c==\n", mirror(c) );
}
