#include <stdio.h>
int  grade[10]={9,8,1,2,3,7,6,5,4,0};
int main()
{
    int n=10;
    for(int k=0;k<10;k++){
            int change=0;
        for(int i=0;i<n-1;i++){
            if(grade[i] < grade[i+1]){
                int t=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=t;
                change++;
        }
    }
    if(change==0)   break;
    for(int i=0;i<n;i++)    printf("%d ",grade[i]);
    printf("\n");
   }

}


