#include <stdio.h>
#include <string.h>
char strA[]="ABD";
char strB[]="ABCD";
int main()
{
    int c=strcmp ("B","C");
    printf(" B - C 得到 %d\n",c);

    c=strcmp(strA,strB);
    printf("%s %s 得到 %d\n",strA,strB,c);
}
